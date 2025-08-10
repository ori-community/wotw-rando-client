#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CharacterPlatformMovement_ScheduledSpeedCurve.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/ExternalForceEntry.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/QueryTriggerInteraction__Enum.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CharacterPlatformMovement {
    IL2CPP_REGISTER_METHOD(0x01303670, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x01303710, void, AggressiveForceStickOn, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303720, void, AggressiveForceStickOff, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303730, app::Collider*, get_GroundCollider, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303740, void, set_GroundCollider, app::CharacterPlatformMovement* this_ptr, app::Collider* value)
    IL2CPP_REGISTER_METHOD(0x01303770, app::Collider*, get_CeilingCollider, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303780, void, set_CeilingCollider, app::CharacterPlatformMovement* this_ptr, app::Collider* value)
    IL2CPP_REGISTER_METHOD(0x013037B0, app::Collider*, get_WallLeftCollider, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013037C0, void, set_WallLeftCollider, app::CharacterPlatformMovement* this_ptr, app::Collider* value)
    IL2CPP_REGISTER_METHOD(0x013037F0, app::Collider*, get_WallRightCollider, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303800, void, set_WallRightCollider, app::CharacterPlatformMovement* this_ptr, app::Collider* value)
    IL2CPP_REGISTER_METHOD(0x00696600, app::DamageDealer*, get_GroundDamageDealer, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303830, app::DamageDealer*, get_CeilingDamageDealer, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A67A0, app::DamageDealer*, get_WallLeftDamageDealer, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303840, app::DamageDealer*, get_WallRightDamageDealer, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303850, bool, get_UseSafeMovementCode, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303860, void, set_UseSafeMovementCode, app::CharacterPlatformMovement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x01303870,
        void,
        SetCollider,
        app::CharacterPlatformMovement* this_ptr,
        app::Collider* collider,
        app::Collider** m_collider,
        app::DamageDealer** m_dmg_dealer
    )
    IL2CPP_REGISTER_METHOD(0x013039B0, bool, get_IsGroundHurting, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303A50, bool, get_IsWallLeftHurting, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303AF0, bool, get_IsWallRightHurting, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303B90, bool, get_IsWallHurting, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303D10, bool, IsSurfaceDamageDealerHurting, app::DamageDealer* dmg_dealer)
    IL2CPP_REGISTER_METHOD(0x01303DE0, bool, get_FaceLeft, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303E50, bool, get_FaceRight, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303EC0, app::Vector2, get_KickbackDirection, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303F80, void, set_KickbackDirection, app::CharacterPlatformMovement* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x01303FB0, bool, get_HeadAndFeetAgainstWall, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303FD0, bool, get_HeadOrFeetAgainstWall, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01303FF0, float, get_MaxGroundAngle, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304040, float, get_MaxCeilingAngle, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304090, bool, IsWallLeft, app::CharacterPlatformMovement* this_ptr, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x01304110, bool, IsWallRight, app::CharacterPlatformMovement* this_ptr, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x01304190, bool, IsGround, app::CharacterPlatformMovement* this_ptr, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x013042F0, bool, IsCeiling, app::CharacterPlatformMovement* this_ptr, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x01304450, bool, get_IsSuspended, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304460, void, set_IsSuspended, app::CharacterPlatformMovement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x013044E0, app::Vector3, get_RigidbodyVelocity, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304570, bool, get_StickToMovingPlatform, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304590, bool, get_IsAnticipatingLanding, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013045B0, app::RaycastHit, get_AntecipationRayHit, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013045E0, void, OnAwake, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304870, void, OnDestroy, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304B70, void, OnEnable, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304C20, void, OnDisable, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01304E30, void, OnPreRestore, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01305020, void, OnPrewarm, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01305120,
        app::CharacterPlatformMovement_ScheduledSpeedCurve*,
        ScheduleSpeedCurve,
        app::CharacterPlatformMovement* this_ptr,
        app::CharacterPlatformMovement_ScheduledSpeedCurve* curve_entry
    )
    IL2CPP_REGISTER_METHOD(
        0x013051F0,
        void,
        AddExternalForce,
        app::CharacterPlatformMovement* this_ptr,
        app::ExternalForceEntry entry,
        bool update_entry_from_same_source
    )
    IL2CPP_REGISTER_METHOD(0x01305520, app::Vector2, GetExternalForceFromSource, app::CharacterPlatformMovement* this_ptr, app::Object_1* source)
    IL2CPP_REGISTER_METHOD(0x01305720, void, ClearExternalForces, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013057D0, app::String*, GetExternalForceSummary, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01305B10, app::Vector2, GetExternalForce, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01305C90, void, UpdateExternalForceEntries, app::CharacterPlatformMovement* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01306050, void, ClearScheduleCurves, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01306100, void, OnMoonControllerColliderHit, app::CharacterPlatformMovement* this_ptr, app::MoonControllerColliderHit* hit_info)
    IL2CPP_REGISTER_METHOD(0x01306BC0, void, OnCollisionEnter, app::CharacterPlatformMovement* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x01306BD0, void, OnCollisionStay, app::CharacterPlatformMovement* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x01306BE0, app::Vector2, get_LastSpeed, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01306C00, void, OnCollision, app::CharacterPlatformMovement* this_ptr, app::Collision* collision, bool just_collided)
    IL2CPP_REGISTER_METHOD(0x013076D0, void, UpdateSurfaceDetails, app::CharacterPlatformMovement* this_ptr, app::GameObject* sound_host_game_object)
    IL2CPP_REGISTER_METHOD(0x013077D0, void, ShrinkCapsule, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01307910, void, ExpandCapsule, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01307A40, void, Move, app::CharacterPlatformMovement* this_ptr, app::Vector3 move)
    IL2CPP_REGISTER_METHOD(
        0x01307B80,
        bool,
        Test_1,
        app::CharacterPlatformMovement* this_ptr,
        app::Vector3 move,
        app::MoonControllerColliderHit* moon_controller_collider_hit
    )
    IL2CPP_REGISTER_METHOD(
        0x01307D50,
        bool,
        Test_2,
        app::CharacterPlatformMovement* this_ptr,
        app::Vector3 move,
        app::MoonControllerColliderHit* moon_controller_collider_hit,
        app::LayerMask mask,
        app::QueryTriggerInteraction__Enum trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x01307F40, bool, Test_3, app::CharacterPlatformMovement* this_ptr, app::Vector3 move)
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, )
    IL2CPP_REGISTER_METHOD(
        0x013080F0,
        bool,
        TeleportAndPlaceOnGround_1,
        app::CharacterPlatformMovement* this_ptr,
        app::Vector3 target,
        float lift,
        float distance
    )
    IL2CPP_REGISTER_METHOD(
        0x01308150,
        bool,
        TeleportAndPlaceOnGround_2,
        app::CharacterPlatformMovement* this_ptr,
        app::Vector3 target,
        app::RaycastHit* hit,
        float lift,
        float distance
    )
    IL2CPP_REGISTER_METHOD(0x01308440, bool, TryPlaceOnGround, app::CharacterPlatformMovement* this_ptr, app::RaycastHit* hit, float distance)
    IL2CPP_REGISTER_METHOD(0x01308710, bool, PlaceOnGround, app::CharacterPlatformMovement* this_ptr, float lift, float distance)
    IL2CPP_REGISTER_METHOD(0x01308B70, bool, get_IsOnClimbableWall, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01308C20, bool, get_IsOnClimbableWallInternal, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013099F0, bool, IsNormalInLimit, app::CharacterPlatformMovement* this_ptr, app::Vector3 normal, float limit, app::Vector3 side)
    IL2CPP_REGISTER_METHOD(0x01309BF0, void, TestAgainstWall, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130A050, void, HackSpeeds, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130A1A0, bool, OnUpdate, app::CharacterPlatformMovement* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0130AA60, void, ScheduleJobs, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130AA90, void, CompleteUpdate, app::CharacterPlatformMovement* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0130B240, bool, get_IsAllowedNonZeroZPosition, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130B250, void, UpdateLandingAnticipation, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0130BD40,
        bool,
        LandAnticipationCheck,
        app::CharacterPlatformMovement* this_ptr,
        float time,
        app::Vector2 velocity,
        app::LayerMask ground_mask
    )
    IL2CPP_REGISTER_METHOD(0x0130BFD0, void, LateUpdate, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130C090, void, KeepOnSurface, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130CE00, void, AdjustSpeedBasedOnCollisions, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130D3B0, app::Vector2, CalculatePositionDelta, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130DC50, void, UpdateRaysSched, app::CharacterPlatformMovement* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x0130F0B0, void, UpdateRaysComplete, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130F780, app::Vector3, get_FeetRayPosition, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130F7B0, app::Vector3, get_HeadRayPosition, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130F7E0, void, Unity5PhysicsBugWorkAround, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130F990, bool, get_GroundNormalIsValid, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130F9A0, void, set_GroundNormalIsValid, app::CharacterPlatformMovement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0130F9B0, void, UpdateNormals, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130FE50, void, UpdateIsOnClimbableWall, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0130FF80, void, OverrideGroundContactNormal, app::CharacterPlatformMovement* this_ptr, app::Vector2 new_ground_contact_normal)
    IL2CPP_REGISTER_METHOD(
        0x0130FFB0,
        void,
        AddKickback_1,
        app::CharacterPlatformMovement* this_ptr,
        app::Kickback* kickback,
        float air_sustain_duration,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x01310000,
        void,
        AddKickback_2,
        app::CharacterPlatformMovement* this_ptr,
        app::AnimationCurve* curve,
        app::Vector2 direction,
        float kickback_multiplier,
        float air_hang_time,
        bool instant,
        bool apply_force_along_the_ground
    )
    IL2CPP_REGISTER_METHOD(
        0x013103F0,
        void,
        AddKickback_3,
        app::CharacterPlatformMovement* this_ptr,
        app::Vector2 direction,
        float kickback_multiplier,
        float air_hang_time,
        bool instant,
        bool apply_force_along_the_ground
    )
    IL2CPP_REGISTER_METHOD(0x01310700, void, RemoveKickbacks, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01310710, void, AddSimpleKickback, app::CharacterPlatformMovement* this_ptr, app::Vector2 force)
    IL2CPP_REGISTER_METHOD(0x01310730, void, UpdateKickback, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01310D50, app::IEnumerator*, MoveSeinToPositionSmoothly, app::CharacterPlatformMovement* this_ptr, float position, int32_t frames)
    IL2CPP_REGISTER_METHOD(0x01310EC0, void, ctor, app::CharacterPlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013119E0, void, cctor, )
} // namespace app::classes::CharacterPlatformMovement
