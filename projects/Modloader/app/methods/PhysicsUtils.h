#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PhysicsUtils {
    IL2CPP_REGISTER_METHOD(0x01155FF0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x011560A0, void, InitializeStatics, ())
    IL2CPP_REGISTER_METHOD(0x01156720, app::LayerMask, get_GroundMask, ())
    IL2CPP_REGISTER_METHOD(0x01156810, app::LayerMask, get_ObstaclesMask, ())
    IL2CPP_REGISTER_METHOD(0x01156900, app::LayerMask, get_KillCharacterMask, ())
    IL2CPP_REGISTER_METHOD(0x011569F0, app::LayerMask, get_CharacterMask, ())
    IL2CPP_REGISTER_METHOD(0x01156AE0, app::LayerMask, get_PlayerMask, ())
    IL2CPP_REGISTER_METHOD(0x01156BD0, app::Comparer_1_UnityEngine_RaycastHit_*, get_NearesHitComparer, ())
    IL2CPP_REGISTER_METHOD(0x01156C70, app::LayerMask, GetMask, (app::PhysicsUtils_Mask__Enum mask))
    IL2CPP_REGISTER_METHOD(0x01156D60, bool, IsInMask, (app::LayerMask mask, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x01156D80, float, GetVelocityFromMaxHeight, (float height, float gravity))
    IL2CPP_REGISTER_METHOD(0x01156E90, float, GetMaxJumpVerticalHeight, (float vertical_speed, float gravity))
    IL2CPP_REGISTER_METHOD(0x01156ED0, float, GetDistance, (app::Vector3 velocity, float gravity))
    IL2CPP_REGISTER_METHOD(0x01157040, float, CalculateHorizontalSpeed, (app::Vector3 jump_vector, float vertical_speed, float gravity, bool first_contact))
    IL2CPP_REGISTER_METHOD(0x011571C0, float, CalculateVerticalSpeed, (app::Vector3 jump_vector, float horizontal_speed, float gravity))
    IL2CPP_REGISTER_METHOD(0x011571F0, void, cctor, ())
} // namespace app::classes::PhysicsUtils
