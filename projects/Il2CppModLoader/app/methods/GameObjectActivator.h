#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GameObjectActivator {
    IL2CPP_REGISTER_METHOD(0x003F8190, void, Start, (app::GameObjectActivator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F81F0, void, OnEnable, (app::GameObjectActivator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8250, void, Serialize, (app::GameObjectActivator * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x003F8450, void, ctor, (app::GameObjectActivator * this_ptr))
}
