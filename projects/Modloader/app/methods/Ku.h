#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterCapsuleController.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/RideableTypes__Enum.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Ku {
    IL2CPP_REGISTER_METHOD(0x0122A160, app::Vector3, get_WorldSpeed, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122A260, bool, get_FacingLeft, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Transform*, get_Root, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFD00, bool, get_IsCarrying, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFD10, void, set_IsCarrying, app::Ku* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0122A2D0, app::ActiveAnimationHandle*, get_CurrentAnimation, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::SoundHost*, get_SoundHost, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122A2E0, void, ResetAirLimits, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122A3C0, void, Awake, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122A610, void, OnDestroy, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122A750, void, OnEnable, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122A8F0, void, OnDisable, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122AA90, void, OnRestoreCheckpoint, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122AAD0, void, DisableKu, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122AC50, app::CharacterCapsuleController*, get_CapsuleController, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::DamageOwner*, get_DamageOwner, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_DamageOwner, app::Ku* this_ptr, app::DamageOwner* value)
    IL2CPP_REGISTER_METHOD(0x00660430, app::CharacterAnimationSystem*, get_Animation, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122AC70, app::MoonAnimator*, get_Animator, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Transform*, get_AttachPoint, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122ACA0, bool, get_IsSuspended, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122ACE0, app::Vector3, get_Position, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122AD40, void, set_Position, app::Ku* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0122AD90, app::Vector3, get_MapDisplayPosition, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122AED0, app::Vector3, get_DeltaPosition, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::RideableTypes__Enum, get_RideableType, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::PlatformBehaviour*, get_SourcePlatformBehaviour, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122B040, bool, IsPointInsideCollectableDetector, app::Ku* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x0122B1D0, app::Action_1_Single_*, get_OnJump, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122B2C0, void, set_OnJump, app::Ku* this_ptr, app::Action_1_Single_* value)
    IL2CPP_REGISTER_METHOD(0x0122B3B0, void, Update, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122B750, void, DestroyIfOutOfBounds, )
    IL2CPP_REGISTER_METHOD(0x008612A0, void, set_Active, app::Ku* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006514B0, bool, get_Active, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0122BA30,
        app::ActiveAnimationHandle,
        PlayAnimation,
        app::Ku* this_ptr,
        app::MoonAnimation* animation,
        int32_t priority,
        app::Func_1_Boolean_* continue_condition,
        app::Action* on_animation_end,
        bool force_override
    )
    IL2CPP_REGISTER_METHOD(0x0122BB50, void, StartCarrying, app::Ku* this_ptr, bool skip_animation)
    IL2CPP_REGISTER_METHOD(0x0122BC50, void, StopCarrying, app::Ku* this_ptr, app::Vector2 extra_force)
    IL2CPP_REGISTER_METHOD(0x008612A0, void, Activate, app::Ku* this_ptr, bool active)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_GameObject, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122A260, bool, get_FaceLeft, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122BD60, void, set_FaceLeft, app::Ku* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_FeetAngle, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122BDE0, app::Vector2, get_LocalSpeed, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122BE20, app::Vector3, get_Speed, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122BF20, void, set_Speed, app::Ku* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0122C020, app::Vector2, get_PhysicsSpeed, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, get_Transform, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, HasAbility, app::Ku* this_ptr, app::AbilityType__Enum ability_type)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStatePerforming, app::Ku* this_ptr, app::CharacterState* state)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Transform*, get_CameraTarget, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C050, bool, get_IsOnGround, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C090, bool, get_IsOnWall, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C0C0, bool, get_IsOnClimbableWall, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C0F0, bool, get_IsOnCeiling, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C150, bool, get_IsOnGroundOrCeiling, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C1D0, int32_t, get_FacingDirection, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAlive, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C240, bool, PlaceOnGround, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C290, bool, get_IsBeingRidenBySein, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C420, void, PlayDeathSound, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C510, void, OnDrawGizmosSelected, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122C650, void, ctor, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_1, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_2, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_3, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_4, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_5, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_6, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_7, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_8, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_9, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_10, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_11, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_12, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_13, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_14, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_15, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_16, app::Ku* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IMoonTypeResolver*, GetResolverForType_17, app::Ku* this_ptr)
} // namespace app::classes::Ku
