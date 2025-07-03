static const char norm_fg[] = "#cadce5";
static const char norm_bg[] = "#050611";
static const char norm_border[] = "#8d9aa0";

static const char sel_fg[] = "#cadce5";
static const char sel_bg[] = "#358CBA";
static const char sel_border[] = "#cadce5";

static const char urg_fg[] = "#cadce5";
static const char urg_bg[] = "#1766AC";
static const char urg_border[] = "#1766AC";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
