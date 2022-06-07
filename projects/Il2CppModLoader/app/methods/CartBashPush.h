#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CartBashPush {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_BashPriority, (app::CartBashPush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, (app::CartBashPush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (app::CartBashPush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (app::CartBashPush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B328E0, void, OnRecieveDamage, (app::CartBashPush * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CartBashPush * this_ptr))
}
