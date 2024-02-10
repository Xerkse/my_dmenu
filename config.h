/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"mononoki:size=15",
	"NotoColorEmoji:pixelsize=20:antialias=true:autohint=true"
	//"JoyPixels:pixelsize=10:antialias=true:autohint=true"
};
static const unsigned int bgalpha = OPAQUE;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
				/*     fg         bg       */
	[SchemeNorm] = { "#ffffff", "#000000" },
	[SchemeSel] = { "#000000", "#ffffff" },
	[SchemeOut] = { "#ff0000", "#ff0000" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns   = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


/*
* Use prefix matching by default; can be inverted with the -x flag.
*/
static int use_prefix = 0;

/* Size of the window border */
static const unsigned int border_width = 0;

