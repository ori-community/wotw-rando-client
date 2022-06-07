#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberScreenManager {
    IL2CPP_REGISTER_METHOD(0x018F8970, app::Vector4, GetScreen, (app::UberScreenMode__Enum mode, float tweak))
    IL2CPP_REGISTER_METHOD(0x018F8B00, app::Vector4, GetScreenMask, (app::UberScreenMode__Enum mode))
}
