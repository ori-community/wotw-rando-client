#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::frameworks::Switch::SwitchFlow {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::SwitchFlow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::SwitchFlow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::SwitchFlow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (app::SwitchFlow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnApplicationQuit, (app::SwitchFlow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SwitchFlow * this_ptr))
} // namespace app::classes::frameworks::Switch::SwitchFlow
