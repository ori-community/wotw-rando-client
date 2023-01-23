#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MeleeComboMoveSettings.h>

namespace app::classes::Moon::ComboSystem::MeleeComboMoveSettings {
    IL2CPP_REGISTER_METHOD(0x00CC8250, void, ctor, (app::MeleeComboMoveSettings * this_ptr))
}
