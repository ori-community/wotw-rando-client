#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WindPipeZone {
    IL2CPP_REGISTER_METHOD(0x00577F30, void, OnTriggerStay, (app::WindPipeZone * this_ptr, app::Collider* col))
    IL2CPP_REGISTER_METHOD(0x005780C0, void, PerformKnockback, (app::WindPipeZone * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x005781F0, void, ctor, (app::WindPipeZone * this_ptr))
} // namespace app::classes::WindPipeZone
