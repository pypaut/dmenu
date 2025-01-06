/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 100;                 /* minimum width when centered */
static const unsigned int border_width = 3; /* border width */
static int centered_text = 1;               /* center text inside window */
static int show_cursor = 0;                 /* show cursor in input field */

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Iosevka:style=Medium:size=20" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/**********/
/* COLORS */
/**********/

/* Defaults */
static const char color1[]    = "#bbbbbb";
static const char color2[]    = "#eeeeee";
static const char color3[]    = "#000000";
static const char color4[]    = "#00ffff";
/* Polar Night : dark blue */
static const char polar1[]    = "#2e3440";
static const char polar2[]    = "#3b4252";
static const char polar3[]    = "#434c5e";
static const char polar4[]    = "#4c566a";
/* Snow Storm : white */
static const char snow1[]     = "#d8dee9";
static const char snow2[]     = "#e5e9f0";
static const char snow3[]     = "#eceff4";
/* Frost : blue */
static const char frost1[]    = "#8fbcbb";
static const char frost2[]    = "#88c0d0";
static const char frost3[]    = "#81a1c1";
static const char frost4[]    = "#5e81ac";
/* Aurora */
static const char aurora1[]   = "#bf616a";  /* Red */
static const char aurora2[]   = "#d08770";  /* Orange */
static const char aurora3[]   = "#ebcb8b";  /* Yellow */
static const char aurora4[]   = "#a3be8c";  /* Green */
static const char aurora5[]   = "#b48ead";  /* Purple */
static const char blackblue[] = "#0e1420";  /* Black blue */
/* Dracula */
static const char drac_background[]  = "#282a36";
static const char drac_currentline[] = "#44475a";
static const char drac_selection[]   = "#44475a";
static const char drac_foreground[]  = "#f8f8f2";
static const char drac_comment[]     = "#6272a4";
static const char drac_cyan[]        = "#8be9fd";
static const char drac_green[]       = "#50fa7b";
static const char drac_orange[]      = "#ffb86c";
static const char drac_pink[]        = "#ff79c6";
static const char drac_purple[]      = "#bd93f9";
static const char drac_red[]         = "#ff5555";
static const char drac_yellow[]      = "#f1fa8c";
/* Win95 */
static const char win_blue[]      = "#050582";
static const char win_white[]     = "#ffffff";
static const char win_black[]     = "#000000";
static const char win_gray[]      = "#c1c1c1";
static const char win_darkgray[]  = "#808080";

/* Nord */
// static const char *colors[SchemeLast][2] = {
// 	/*     fg         bg       */
// 	[SchemeNorm] = { color1, polar1 },
// 	[SchemeSel]  = { color2, polar1 },
// 	[SchemeOut]  = { snow3, snow3 },
// 	[SchemeBorder] = { frost3, frost3 },
// };

/* Dracula */
// static const char *colors[SchemeLast][2] = {
//     /*     fg         bg       */
//     [SchemeNorm]   = { color2, drac_background },
//     [SchemeSel]    = { drac_purple, drac_background },
//     [SchemeOut]    = { color3, color4 },
//     [SchemeBorder] = { drac_purple, drac_purple },
// };

/* Win95 */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]   = { win_black,    win_gray  },       // Text, not selected
	[SchemeSel]    = { win_black,    win_darkgray },    // Text, selected
	[SchemeOut]    = { win_black,    win_black },       // I don't know
	[SchemeBorder] = { win_darkgray, win_darkgray },    // Border
};
