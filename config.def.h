/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 200;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka Nerd Font Mono:style=Medium:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/**********/
/* COLORS */
/**********/

/* Defaults */
static const char color1[] = "#bbbbbb";
static const char color2[] = "#eeeeee";
static const char color3[] = "#000000";
static const char color4[] = "#00ffff";
/* Polar Night */
static const char nord0[]  = "#2e3440";
static const char nord1[]  = "#3b4252";
static const char nord2[]  = "#434c5e";
static const char nord3[]  = "#4c566a";
/* Snow Storm */
static const char nord4[]  = "#d8dee9";
static const char nord5[]  = "#e5e9f0";
static const char nord6[]  = "#eceff4";
/* Frost */
static const char nord7[]  = "#8fbcbb";
static const char nord8[]  = "#88c0d0";
static const char nord9[]  = "#81a1c1";
static const char nord10[] = "#5e81ac";
/* Aurora */
static const char nord11[] = "#bf616a";  /* Red */
static const char nord12[] = "#d08770";  /* Orange */
static const char nord13[] = "#ebcb8b";  /* Yellow */
static const char nord14[] = "#a3be8c";  /* Green */
static const char nord15[] = "#b48ead";  /* Purple */
static const char blackblue[] = "#0e1420";  /* Black blue */

// static const char *colors[SchemeLast][2] = {
// 	/*     fg         bg       */
// 	[SchemeNorm] = { color1, blackblue },
// 	[SchemeSel]  = { color2, nord10 },
// 	[SchemeOut]  = { color3, color4 },
// };

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

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]   = { color2, drac_background },
	[SchemeSel]    = { drac_purple, drac_background },
	[SchemeOut]    = { color3, color4 },
    [SchemeBorder] = { drac_purple, drac_purple },
};

// static const char BorderColor[] = drac_purple;

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
