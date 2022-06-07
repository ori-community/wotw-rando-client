#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MistController {
    IL2CPP_REGISTER_METHOD(0x01327100, void, Awake, (app::MistController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327190, void, FixedUpdate, (app::MistController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MistController * this_ptr))
}
