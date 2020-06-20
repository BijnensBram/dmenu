/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static const int bordercol = 11049348; /* int value of the color should fix this some time */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* Gruvbox colorscheme */
static const char *colors[SchemeLast][2] = {
	/*							fg				bg       */
	[SchemeNorm]			= {"#a89984", "#282828"},
	[SchemeSel]				= {"#fbf1c7", "#282828"},
	[SchemeSelHighlight]	= {"#fb4934", "#282828"},
	[SchemeNormHighlight]	= {"#fb4934", "#282828"},
	[SchemeOut]				= {"#a89984", "#a89984"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
