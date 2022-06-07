#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::CapsuleCollider {
    IL2CPP_REGISTER_METHOD(0x0309DFC0, app::Vector3, get_center, (app::CapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309E040, void, set_center, (app::CapsuleCollider * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0309E0A0, float, get_radius, (app::CapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309E0F0, void, set_radius, (app::CapsuleCollider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0309E150, float, get_height, (app::CapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309E1A0, void, set_height, (app::CapsuleCollider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0309E200, int32_t, get_direction, (app::CapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309E250, void, set_direction, (app::CapsuleCollider * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0309E2B0, void, set_moonFastResize, (app::CapsuleCollider * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0309E310, void, SetRadiusAndHeight, (app::CapsuleCollider * this_ptr, float radius, float height))
    IL2CPP_REGISTER_METHOD(0x0309E380, void, BatchedSetRadiusAndHeight, (app::CapsuleCollider__Array * capsules, int32_t count, app::Single__Array * radius, app::Single__Array * height))
    IL2CPP_REGISTER_METHOD(0x0309E380, void, Internal_BatchedSetRadiusAndHeight, (app::CapsuleCollider__Array * capsules, int32_t count, app::Single__Array * radius, app::Single__Array * height))
    IL2CPP_REGISTER_METHOD(0x0309E400, void, get_center_Injected, (app::CapsuleCollider * this_ptr, app::Vector3 * ret))
    IL2CPP_REGISTER_METHOD(0x0309E460, void, set_center_Injected, (app::CapsuleCollider * this_ptr, app::Vector3 * value))
}
