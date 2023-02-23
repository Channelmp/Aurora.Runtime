#pragma once

#ifdef _DEV
#define BUILD_ID "Dev"
#elif _PROD
#define BUILD_ID "Prod"
#else
#define BUILD_ID "Unknown"
#endif

#ifdef _DEV
#define HOST_URL "http://localhost:3551"
#else
#define HOST_URL "http://backend.channelmp.com:3551"
#endif
