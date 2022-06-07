#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinObjectFilter {
    IL2CPP_REGISTER_METHOD(0x008AF110, bool, Valid, (app::SeinObjectFilter * this_ptr, app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinObjectFilter * this_ptr))
}
