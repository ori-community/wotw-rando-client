#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TelemetryFpsSample.h>

namespace app::classes::TelemetryFpsSample {
    IL2CPP_REGISTER_METHOD(0x00CE4A80, void, ctor, app::TelemetryFpsSample* this_ptr)
}
