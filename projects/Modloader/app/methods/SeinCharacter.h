#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterCapsuleController.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterfallIntersectionMode__Enum.h>

namespace app::classes::SeinCharacter {
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::SpiritLightRadialVisualAffector*, get_LightAffector, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_LightAffector, app::SeinCharacter* this_ptr, app::SpiritLightRadialVisualAffector* value)
    IL2CPP_REGISTER_METHOD(0x00A3F500, app::Vector2, get_PhysicsSpeed, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F530, app::CharacterAnimationSystem*, get_Animation, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F570, app::MoonAnimator*, get_Animator, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F5B0, bool, HasAbility, app::SeinCharacter* this_ptr, app::AbilityType__Enum ability_type)
    IL2CPP_REGISTER_METHOD(0x00A3F5E0, bool, IsStatePerforming, app::SeinCharacter* this_ptr, app::CharacterState* state)
    IL2CPP_REGISTER_METHOD(0x0070BB00, app::NavigationType__Enum, get_CurrentAreaType, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F600, void, set_CurrentAreaType, app::SeinCharacter* this_ptr, app::NavigationType__Enum value)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::SoundHost*, get_SoundHost, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F610, app::Transform*, get_Root, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F730, bool, get_CanMove, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F790, bool, get_IsOnCeiling, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F800, bool, get_IsOnGroundOrCeiling, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F890, bool, get_IsInAir, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F8D0, bool, get_IsFalling, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F940, bool, get_IsSuspended, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F980, app::Vector3, get_Position, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3F9E0, void, set_Position, app::SeinCharacter* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00A3FA40, app::Vector3, get_MapDisplayPosition, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3FB80, app::Vector3, get_PreviousPosition, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3FBD0, app::Vector3, get_DeltaPosition, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008612A0, void, set_Active, app::SeinCharacter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006514B0, bool, get_Active, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A3FD40, void, Awake, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A40590, void, OnEnable, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A407A0, void, OnDisable, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A409A0, void, Start, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A40D70, void, OnDestroy, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A410C0, void, OnPostRestoreCheckpoint, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A41200, void, OnPostCreateCheckpoint, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A412E0, void, MakeBelongToSein, app::SeinCharacter* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x00A415B0, void, OnSetTurningHandler, app::SeinCharacter* this_ptr, app::CharacterLeftRightMovement* left_right_movement)
    IL2CPP_REGISTER_METHOD(0x00A41D80, void, DetectAreas, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A41F60, void, FixedUpdate, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008612A0, void, Activate, app::SeinCharacter* this_ptr, bool active)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_GameObject, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42630, bool, get_FaceLeft, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42690, void, set_FaceLeft, app::SeinCharacter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A42700, int32_t, get_FacingDirection, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42760, app::Vector2, get_PreviusPositionForWaterfallInteraction, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42840, app::Vector2, get_PositionForWaterfallInteraction, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42930, app::Vector2, get_SpeedForWaterfallInteraction, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42A70, void, set_SpeedForWaterfallInteraction, app::SeinCharacter* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00A42BC0, app::Rect, get_BoundsForWaterfallInteraction, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::WaterfallIntersectionMode__Enum, get_WaterfallIntersectionMode, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42D00, app::Rigidbody*, get_RigidbodyForWaterfallInteraction, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFlamable, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42D30, app::Vector3, get_Speed, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42E30, void, set_Speed, app::SeinCharacter* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, get_Transform, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42F30, app::Transform*, get_CameraTarget, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A42FE0, app::CharacterCapsuleController*, get_CapsuleController, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAB0, app::DamageOwner*, get_DamageOwner, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43000, void, set_DamageOwner, app::SeinCharacter* this_ptr, app::DamageOwner* value)
    IL2CPP_REGISTER_METHOD(0x00A43010, bool, get_IsOnGround, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43050, bool, get_IsOnGroundOrWillBe, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A430A0, bool, get_IsAlive, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A430E0, bool, get_IsDigging, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43130, bool, get_IsOnWall, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43160, bool, get_IsOnClimbableWall, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43190, bool, PlaceOnGround, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A431E0, void, ResetAirLimits, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_IsSphere, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43210, void, set_IsSphere, app::SeinCharacter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A43790, bool, get_IsBeingLeached, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091D5A0, int32_t, get_LeachCount, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A437A0, void, set_LeachCount, app::SeinCharacter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00A437B0, float, get_FeetAngle, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43800, app::Vector3, get_FeetPosition, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43850, app::Vector2, get_LocalSpeed, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43890, app::SurfaceMaterialType__Enum, get_GroundMaterialType, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A438D0, bool, ResolveLaunch, app::SeinCharacter* this_ptr, app::Vector3 velocity)
    IL2CPP_REGISTER_METHOD(0x00A43A00, void, ResolveLaunchIgnoreCollisions, app::SeinCharacter* this_ptr, app::Collider* launcher_collider, bool ignore)
    IL2CPP_REGISTER_METHOD(0x00A43AE0, void, ResolveLaunchHide, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43B40, void, ResolveLaunchRelease, app::SeinCharacter* this_ptr, app::Vector3 position, float angle, app::Vector3 velocity)
    IL2CPP_REGISTER_METHOD(0x00A43BC0, void, UpdateLaunchPosition, app::SeinCharacter* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00A43D80, void, FillHealthAndEnergy, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43E40, void, ctor, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_1, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_2, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_3, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_4, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_5, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_6, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_7, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_8, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_9, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_10, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_11, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_12, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_13, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_14, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_15, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_16, app::SeinCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_17, app::SeinCharacter* this_ptr)
} // namespace app::classes::SeinCharacter
