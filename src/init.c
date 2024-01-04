#define R_NO_REMAP
#include <R.h>
#include <R_ext/Rdynload.h>
#include <Rinternals.h>
#include <stdlib.h>  // for NULL

/* Section generated by pkgbuild, do not edit */
/* .Call calls */
extern SEXP C_proj_crs_text(void *, void *);
extern SEXP C_proj_trans_fmt(void *);
extern SEXP C_proj_trans_list(void *, void *, void *);
extern SEXP C_proj_trans_new(void *, void *, void *, void *);
extern SEXP C_proj_trans_xy(void *, void *, void *, void *);
extern SEXP C_proj_version(void);

static const R_CallMethodDef CallEntries[] = {
    {"C_proj_crs_text",   (DL_FUNC) &C_proj_crs_text,   2},
    {"C_proj_trans_fmt",  (DL_FUNC) &C_proj_trans_fmt,  1},
    {"C_proj_trans_list", (DL_FUNC) &C_proj_trans_list, 3},
    {"C_proj_trans_new",  (DL_FUNC) &C_proj_trans_new,  4},
    {"C_proj_trans_xy",   (DL_FUNC) &C_proj_trans_xy,   4},
    {"C_proj_version",    (DL_FUNC) &C_proj_version,    0},
    {NULL, NULL, 0}
};
/* End section generated by pkgbuild */

void R_init_PROJ(DllInfo* dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
