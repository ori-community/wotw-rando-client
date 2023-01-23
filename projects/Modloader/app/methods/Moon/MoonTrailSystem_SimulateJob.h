#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTrailSystem_SimulateJob__Boxed.h>

namespace app::classes::Moon::MoonTrailSystem_SimulateJob {
    IL2CPP_REGISTER_METHOD(0x001F9D00, void, Execute, (app::MoonTrailSystem_SimulateJob__Boxed * this_ptr, int32_t index))
}
