/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;    /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
static const unsigned int alpha = 0xff; /* Amount of opacity. 0xff is opaque */
static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"monospace:size=10"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#bbbbbb", "#222222"},
    [SchemeSel] = {"#eeeeee", "#005577"},
    [SchemeOut] = {"#000000", "#00ffff"},
    [SchemeCursor] = {"#222222", "#bbbbbb"},
};

static const unsigned int alphas[SchemeLast][2] = {
    /*		fgalpha		bgalphga	*/
    [SchemeNorm] = {fgalpha, bgalpha},
    [SchemeSel] = {fgalpha, bgalpha},
    [SchemeOut] = {fgalpha, bgalpha},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of
   lines */

static unsigned int lines = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * -vi option; if nonzero, vi mode is always enabled and can be
 * accessed with the global_esc keysym + mod mask
 */
static unsigned int vi_mode = 1;
static unsigned int start_mode =
    0; /* mode to use when -vi is passed. 0 = insert mode, 1 = normal mode */
static Key global_esc = {
    XK_n, Mod4Mask}; /* escape key when vi mode is not enabled explicitly */
static Key quit_keys[] = {
    /* keysym	modifier */
    {XK_q, 0}};
