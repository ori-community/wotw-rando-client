#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KeystoneDoorVisuals {
    IL2CPP_REGISTER_METHOD(0x00E706B0, void, SetSetupStateControllerState, (app::KeystoneDoorVisuals * this_ptr, app::DesiredUberStateDoor * uber_state))
    IL2CPP_REGISTER_METHOD(0x00E707C0, void, SetDoorSlotsDoors, (app::KeystoneDoorVisuals * this_ptr, app::KeystoneDoorLogic * logic))
    IL2CPP_REGISTER_METHOD(0x00E70910, void, ctor, (app::KeystoneDoorVisuals * this_ptr))
}
