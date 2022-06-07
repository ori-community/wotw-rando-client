#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StomperTrigger {
    IL2CPP_REGISTER_METHOD(0x0065C110, void, OnTriggerEnter, (app::StomperTrigger * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x0065C110, void, OnTriggerStay, (app::StomperTrigger * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x0065C120, void, PerformTrigger, (app::StomperTrigger * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::StomperTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8610, void, ctor, (app::StomperTrigger * this_ptr))
}
