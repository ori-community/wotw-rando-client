#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WideScreenAdjustmentSettings {
    IL2CPP_REGISTER_METHOD(0x00573CC0, void, ApplyToPuppet, (app::WideScreenAdjustmentSettings * this_ptr, app::CameraPuppetController * puppet))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WideScreenAdjustmentSettings * this_ptr))
}
