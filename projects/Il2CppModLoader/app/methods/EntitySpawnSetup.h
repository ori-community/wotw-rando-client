#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EntitySpawnSetup {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::EntityPlaceholder *, get_Placeholer, (app::EntitySpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Placeholer, (app::EntitySpawnSetup * this_ptr, app::EntityPlaceholder * value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EntitySpawnSetup * this_ptr))
}
