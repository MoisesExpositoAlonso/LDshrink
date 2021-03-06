library(RcppEigenH5)
library(SeqArray)
library(RSSp)

library(tidyverse)
library(LDshrink)

gdsf <- snakemake@input[["gdsf"]]
evd_chunkf <- snakemake@input[["evd_chunkf"]]
sumstatf <- snakemake@input[["sumstatf"]]
tparamf <- snakemake@input[["tparamf"]]
mfgeneid <- as.character(snakemake@params[["fgeneid"]])

outf <- snakemake@output[["logf"]]
Ql_df <- read_si_ql(evd_chunkf)

a_sumdata <- map2_dfr(sumstatf,mfgeneid,function(x, fgeneid){
    read_delim(x, delim = "\t") %>%
        mutate(fgeneid = fgeneid)
})
gds <- seqOpen(gdsf)
n <- length(seqGetData(gds,"sample.id"))
seqClose(gds)
uh_mat <- select(a_sumdata,SNP,Z,fgeneid) %>% spread(fgeneid,Z) %>% select(-SNP) %>% data.matrix()





ret_dfl <- RSSp_run_mat(Ql_df,uh_mat,n)
tret_df <- bind_rows(ret_dfl)
write_delim(tret_df, path = outf, delim = "\t")




