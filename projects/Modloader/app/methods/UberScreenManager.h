#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/UberScreenMode__Enum.h>

namespace app::classes::UberScreenManager {
    IL2CPP_REGISTER_METHOD(0x018F8970, app::Vector4, GetScreen, (app::UberScreenMode__Enum mode, float tweak))
    IL2CPP_REGISTER_METHOD(0x018F8B00, app::Vector4, GetScreenMask, (app::UberScreenMode__Enum mode))
} // namespace app::classes::UberScreenManager
