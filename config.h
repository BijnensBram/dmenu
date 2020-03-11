/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char col_black[]		= "#282a2e"; /* black   */
static const char col_red[]			= "#a54242"; /* red     */
static const char col_green[]		= "#8c9440"; /* green   */
static const char col_yellow[]		= "#de935f"; /* yellow  */
static const char col_blue[]		= "#5f819d"; /* blue    */
static const char col_magenta[]		= "#85678f"; /* magenta */
static const char col_cyan[]		= "#5e8d87"; /* cyan    */
static const char col_white[]		= "#707880"; /* white   */
static const char col_bg[]			= "#1d1f21"; /* background */
static const char col_fg[]			= "#c5c8c6"; /* foreground */
static const char *colors[SchemeLast][2] = {
	/*							fg				bg       */
	[SchemeNorm]			= {	col_blue,		col_black },
	[SchemeSel]				= {	col_bg,			col_blue },
	[SchemeSelHighlight]	= { col_red,		col_blue },
	[SchemeNormHighlight]	= { col_red,		col_bg },
	[SchemeOut]				= { col_black,		col_cyan },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 4;
