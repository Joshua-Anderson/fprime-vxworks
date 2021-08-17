#include <Os/Log.hpp>

#include <vxWorks.h>
#include <logLib.h>

namespace Os {
    Log::Log() {

        // Register myself as a logger at construction time. If used in unison with LogDefault.cpp, this will
        // automatically create this as a default logger.
        this->registerLogger(this);
    }

    // Instance implementation
    void Log::log(
        const char* fmt,
        POINTER_CAST a0,
        POINTER_CAST a1,
        POINTER_CAST a2,
        POINTER_CAST a3,
        POINTER_CAST a4,
        POINTER_CAST a5,
        POINTER_CAST a6,
        POINTER_CAST a7,
        POINTER_CAST a8,
        POINTER_CAST a9
    ) {
        ::logMsg(const_cast<char*>(fmt), a0, a1, a2, a3, a4, a5);
    }
}
