#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Behaviour {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007893E0, bool, get_enabled, (app::Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153790, void, set_enabled, (app::Behaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0241F560, bool, get_moonReady, (app::Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241F5B0, void, set_moonReady, (app::Behaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F2A910, bool, get_isActiveAndEnabled, (app::Behaviour * this_ptr))
}
