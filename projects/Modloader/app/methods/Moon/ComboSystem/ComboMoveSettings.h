#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComboMoveSettings.h>

namespace app::classes::Moon::ComboSystem::ComboMoveSettings {
    IL2CPP_REGISTER_METHOD(0x00CC6660, void, ctor, (app::ComboMoveSettings * this_ptr))
}
