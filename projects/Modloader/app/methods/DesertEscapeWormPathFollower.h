#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DesertEscapeWormPathFollower {
    IL2CPP_REGISTER_METHOD(0x00B88320, void, Awake, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B88530, void, OnRestoreCheckpoint, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719060, DesertEscapeWormPathFollower_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B88560, void, OnDestroy, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B88730, void, OnEnable, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B887D0, void, OnDisable, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B88870, void, OnValidate, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B88870, void, ApplySettings, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B888B0, void, Start, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B88DA0, void, FixedUpdate, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B88E80, void, Update, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B88E80, void, LateUpdate, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B88E90, void, UpdateVisuals, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B89840, app::Vector3, GetSegmentPosition, (app::DesertEscapeWormPathFollower * this_ptr, float distance_from_head, app::Transform* previous_segment))
    IL2CPP_REGISTER_METHOD(0x00B89FF0, void, ResetToNode, (app::DesertEscapeWormPathFollower * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00B8A120, bool, get_IsSuspended, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8A130, void, set_IsSuspended, (app::DesertEscapeWormPathFollower * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006DC050, app::SuspendableMask__Enum, get_Mask, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8A140, void, set_Mask, (app::DesertEscapeWormPathFollower * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00B8A1F0, void, Apply, (app::DesertEscapeWormPathFollower * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_ApplyOnEditor, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::IUberState__Array*, get_AffectingUberStates, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::DesertEscapeWormPathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8A280, void, ctor, (app::DesertEscapeWormPathFollower * this_ptr))
} // namespace app::classes::DesertEscapeWormPathFollower
