#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinLandOnTrigger {
    IL2CPP_REGISTER_METHOD(0x01020B70, void, OnCollisionEnter, (app::SeinLandOnTrigger * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinLandOnTrigger * this_ptr))
}
