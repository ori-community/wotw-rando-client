#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/Rail.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/RideableTypes__Enum.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/CartBody.h>
#include <Modloader/app/structs/CartAnimation.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/CartStopper.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/CartBouncer.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Enemy.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>

namespace app::classes::Cart {
    IL2CPP_REGISTER_METHOD(0x00B29A80, app::Rect, get_WorldRectBounds, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B29C50, app::Rail*, get_CurrentRail, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B29C60, void, set_CurrentRail, (app::Cart * this_ptr, app::Rail* value))
    IL2CPP_REGISTER_METHOD(0x00B29C70, bool, get_IsMoving, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B29C80, void, set_IsMoving, (app::Cart * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00B29C90, bool, get_IsCarrying, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0068D630, app::GameObject*, get_CarryingObj, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00813FA0, app::Collider__Array*, get_CarryingColliders, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00756A30, app::Transform*, get_CachedTransform, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B29D40, app::Vector3, get_Forward, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B29F10, app::Collider__Array*, get_Colliders, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B29FB0, app::Transform*, get_AttachPoint, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RideableTypes__Enum, get_RideableType, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::PlatformBehaviour*, get_SourcePlatformBehaviour, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A010, app::Action_1_Single_*, get_OnJump, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A040, void, set_OnJump, (app::Cart * this_ptr, app::Action_1_Single_* value))
    IL2CPP_REGISTER_METHOD(0x00B2A070, float, get_TotalExtraSpeed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A150, bool, get_FacingLeft, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_RailMask, ())
    IL2CPP_REGISTER_METHOD(0x00B2A180, app::CartBody*, get_Body, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::CartAnimation*, get_Animation, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A1A0, bool, get_IsOnRail, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A2D0, bool, get_CanFlip, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A320, bool, get_CanJump, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A450, bool, get_CanDismount, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A4B0, app::ISoundHost*, get_SoundHost, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A550, void, OnEnable, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2ABC0, void, OnDisable, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2AFE0, void, Awake, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2B740, void, ResetSpeeds, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2B880, app::Rail*, GetCurrentRail, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2BC10, void, FixedUpdate, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2CE60, void, UpdateAccelartion, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2D070, void, PlayImpact, (app::Cart * this_ptr, float body_force, float bumper_force, float scale_force))
    IL2CPP_REGISTER_METHOD(0x00B2D200, void, PlayLand, (app::Cart * this_ptr, float body_force, float bumper_force, float scale_force))
    IL2CPP_REGISTER_METHOD(0x00B2D260, void, PlayBumperHit, (app::Cart * this_ptr, float body_force, float bumper_force, float scale_force))
    IL2CPP_REGISTER_METHOD(0x00B2D2C0, void, ApplyImpactForces, (app::Cart * this_ptr, float body_force, float bumper_force, float scale_force))
    IL2CPP_REGISTER_METHOD(0x00B2D350, void, OnEnterCartStopper, (app::Cart * this_ptr, app::CartStopper* stopper))
    IL2CPP_REGISTER_METHOD(0x00B2D540, void, SetMaxSpeed, (app::Cart * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x00B2D5D0, void, Stop, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2D660, void, OnHorizontalCollision, (app::Cart * this_ptr, app::Collider* col))
    IL2CPP_REGISTER_METHOD(0x00B2D690, void, OnRightCollision, (app::Cart * this_ptr, app::Vector3 point, app::Collider* col))
    IL2CPP_REGISTER_METHODINFO(0x0471ABD8, Cart_OnRightCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B2D690, void, OnLeftCollision, (app::Cart * this_ptr, app::Vector3 point, app::Collider* col))
    IL2CPP_REGISTER_METHODINFO(0x04720288, Cart_OnLeftCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B2D6C0, void, OnBounce, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2D750, bool, BounceCondition, (app::Cart * this_ptr, app::CartBouncer* bouncer))
    IL2CPP_REGISTER_METHOD(0x00B2D9A0, void, OnLand, (app::Cart * this_ptr, app::Vector3 normal, app::Collider* col))
    IL2CPP_REGISTER_METHODINFO(0x0475E958, Cart_OnLand__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B2DC50, void, PlaySequence, (app::Cart * this_ptr, app::LegacyTimelineSequence* sequence))
    IL2CPP_REGISTER_METHOD(0x00B2DD90, void, StopSequence, (app::Cart * this_ptr, app::LegacyTimelineSequence* sequence))
    IL2CPP_REGISTER_METHOD(0x00B2DDD0, void, StartCarrying, (app::Cart * this_ptr, bool skip_animation))
    IL2CPP_REGISTER_METHOD(0x00B2E060, void, StartMovingEmpty, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2E110, void, OnPlayerDeath, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04788280, Cart_OnPlayerDeath__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B2E240, void, StopCarrying_1, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2E330, void, StopCarrying_2, (app::Cart * this_ptr, app::Vector2 extra_force))
    IL2CPP_REGISTER_METHOD(0x00B2E540, void, IgnoreColliders, (app::Cart * this_ptr, app::Collider__Array* colliders, bool ignore))
    IL2CPP_REGISTER_METHOD(0x00B2E690, bool, RaycastGround, (app::Cart * this_ptr, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x00B2ED70, int32_t, RaycastHitsInFront, (app::Cart * this_ptr, app::RaycastHit__Array** hits))
    IL2CPP_REGISTER_METHOD(0x00B2F070, app::Enemy*, RaycastEnemy, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2F3D0, void, DestroyCart, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744648, Cart_DestroyCart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B2F9C0, void, DestroyAndKillPassenger, (app::Cart * this_ptr, app::DamageType__Enum damage_type))
    IL2CPP_REGISTER_METHOD(0x00B2FD10, void, GetValidRails, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B305E0, bool, ShouldIgnoreRail, (app::Cart * this_ptr, app::Rail* rail, app::RaycastHit hit))
    IL2CPP_REGISTER_METHOD(0x00B30870, bool, ShouldRailDoDamage, ())
    IL2CPP_REGISTER_METHOD(0x00B30880, bool, IsPointInsideCollectableDetector, (app::Cart * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B30A10, bool, CanBeBashed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B30AF0, bool, IsDead, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_BashPriority, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B30BE0, void, OnRecieveDamage, (app::Cart * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00B30E20, float, CalculateVelocityRtpcValue, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729CF8, Cart_CalculateVelocityRtpcValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B30F60, void, OnDrawGizmos, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31550, bool, ShouldRespawn, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31590, app::IDamageReciever__Array*, get_AffectedReceivers, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B315A0, void, ctor, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::Cart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::Cart * this_ptr))
} // namespace app::classes::Cart
