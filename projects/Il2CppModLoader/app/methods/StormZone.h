#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::StormZone {
    IL2CPP_REGISTER_METHOD(0x0065CEC0, void, OnTriggerEnter, (app::StormZone * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x0065CFA0, void, OnTriggerExit, (app::StormZone * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x0065D070, void, FixedUpdate, (app::StormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065D270, void, ctor, (app::StormZone * this_ptr))
} // namespace app::classes::StormZone
