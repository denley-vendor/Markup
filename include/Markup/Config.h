#ifndef __MARKUP_CONFIG__
#define __MARKUP_CONFIG__

#if defined(__GNUC__) && __GNUC__ >= 4
	#define MARKUP_API			 __attribute__ ((visibility("default")))
#elif defined(_USRDLL)
	#if defined(MARKUP_EXPORTS)
		#define MARKUP_API		 __declspec(dllexport)
	#else
		#define MARKUP_API		 __declspec(dllimport)
	#endif
#else
	#define MARKUP_API
#endif

#endif
