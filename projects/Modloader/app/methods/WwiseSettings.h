#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseSettings.h>

namespace app::classes::WwiseSettings {
    IL2CPP_REGISTER_METHOD(0x0271B510, void, ctor, app::WwiseSettings* this_ptr)
}
