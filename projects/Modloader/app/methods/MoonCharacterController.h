#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonCharacterController {
    IL2CPP_REGISTER_METHOD(0x00F452B0, app::Vector3, get_Position, (app::MoonCharacterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F45340, void, Prewarm, (app::MoonCharacterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F45340, void, Awake, (app::MoonCharacterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F45400, void, Move_1, (app::MoonCharacterController * this_ptr, app::Vector3 delta, bool use_safe_movement_code))
    IL2CPP_REGISTER_METHOD(0x00F45480, void, RenderVolume, (app::MoonCharacterController * this_ptr, app::Vector3 p1, app::Vector3 p2, float radius, app::Vector3 dir, float distance))
    IL2CPP_REGISTER_METHOD(0x00F45B40, void, HideVolume, (app::MoonCharacterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F45C60, bool, SweepTestSafeAll, (app::MoonCharacterController * this_ptr, app::Vector3 direction, app::RaycastHit__Array** hit_info, float magnitude, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x00F45CC0, bool, SweepTestSafe, (app::MoonCharacterController * this_ptr, app::Vector3 direction, app::RaycastHit* hit_info, float magnitude, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x00F45D10, bool, Test_1, (app::MoonCharacterController * this_ptr, app::Vector3 delta))
    IL2CPP_REGISTER_METHOD(0x00F45DC0, bool, Test_2, (app::MoonCharacterController * this_ptr, app::Vector3 delta, app::MoonControllerColliderHit* moon_hit_info, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x00F45FD0, bool, TestAll, (app::MoonCharacterController * this_ptr, app::Vector3 delta, app::MoonControllerColliderHit* moon_hit_info, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x00F46410, bool, CapsuleTest, (app::MoonCharacterController * this_ptr, app::Vector3 delta, app::MoonControllerColliderHit* moon_hit_info, app::LayerMask mask, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x00F46920, void, Move_2, (app::MoonCharacterController * this_ptr, app::Vector3 delta, app::Vector3 original_delta, bool use_safe_movement_code))
    IL2CPP_REGISTER_METHOD(0x00F46970, void, MovePrivate, (app::MoonCharacterController * this_ptr, app::Vector3 delta, app::Vector3 original_delta, bool use_safe_movement_code))
    IL2CPP_REGISTER_METHOD(0x00F46FF0, void, ctor, (app::MoonCharacterController * this_ptr))
} // namespace app::classes::MoonCharacterController
