#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/IComboMove.h>

namespace app::classes::Moon::ComboSystem::ComboMoveExtensions {
    IL2CPP_REGISTER_METHOD(0x00CC63A0, app::ComboInput*, GetComboInput, (app::IComboMove * move, bool facing_left))
}
