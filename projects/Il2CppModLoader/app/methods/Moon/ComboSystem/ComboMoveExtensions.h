#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ComboSystem::ComboMoveExtensions {
    IL2CPP_REGISTER_METHOD(0x00CC63A0, app::ComboInput*, GetComboInput, (app::IComboMove * move, bool facing_left))
}
