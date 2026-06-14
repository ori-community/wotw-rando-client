#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FPSTestResult.h>

namespace app::classes::FPSTestResult {
    IL2CPP_REGISTER_METHOD(0x0098EEF0, void, ctor, app::FPSTestResult* this_ptr)
}
