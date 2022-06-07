#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GameObjectFilter {
    IL2CPP_REGISTER_METHOD(0x003F8970, bool, Valid, (app::GameObjectFilter * this_ptr, app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GameObjectFilter * this_ptr))
}
