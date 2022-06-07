#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PauseMenuInventoryElements {
    IL2CPP_REGISTER_METHOD(0x0044A0F0, void, Setup, (app::PauseMenuInventoryElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044A180, void, UpdateElements, (app::PauseMenuInventoryElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044A340, bool, HasElement, (app::PauseMenuInventoryElements * this_ptr, app::EquipmentType__Enum type))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PauseMenuInventoryElements * this_ptr))
}
