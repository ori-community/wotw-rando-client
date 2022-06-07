#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpawnPrefabAction {
    IL2CPP_REGISTER_METHOD(0x00EF5F90, void, Perform, (app::SpawnPrefabAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00EF5FB0, app::String *, GetNiceName, (app::SpawnPrefabAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SpawnPrefabAction * this_ptr))
}
