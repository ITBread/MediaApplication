#define CONFIG_AVFILTER 0

#ifdef _WIN32
	#undef main /* We don't want SDL to override our main() */
#endif
