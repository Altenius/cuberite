#pragma once

#include "Logger.h"
#include <time.h>
#include <chrono>
// tolua_begin

inline unsigned int GetTime()
{
	// NB: For caveats, please see https://stackoverflow.com/a/14505248
	return static_cast<unsigned int>(std::chrono::seconds(time(0)).count());
}

// tolua_end
