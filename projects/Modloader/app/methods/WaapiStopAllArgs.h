#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaapiStopAllArgs.h>

namespace app::classes::WaapiStopAllArgs {
    IL2CPP_REGISTER_METHOD(0x0271B490, void, ctor, app::WaapiStopAllArgs* this_ptr)
}
