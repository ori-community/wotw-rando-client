#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterPlatformMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_DEFINED)
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/PlatformMovement__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_PlatformMovement__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_JobHandle_DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_RaycastHit__DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_RaycastCommand__DEFINED)
#define IL2CPP_STRUCT_CharacterPlatformMovement__Fields_DEFINED
struct Action_1_MoonControllerColliderHit_;
struct Action_1_UnityEngine_Collision_;
struct Action;
struct MoonCharacterController;
struct Collider;
struct DamageDealer;
struct IKLimb__Array;
struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve_;
struct CharacterPlatformMovement_KickbackEntry;
struct CharacterPlatformMovement_AirSuspension;
struct PlatformingFXFunctionality;
struct List_1_ExternalForceEntry_;
struct RaycastHit__Array;
struct RaycastCommand__Array;
struct Boolean__Array;
struct CharacterPlatformMovement__Fields {
    struct PlatformMovement__Fields _;
    float ForceStickKeepToSurfaceDistance;
    bool HeadAgainstWall;
    bool FeetAgainstWall;
    struct Vector3 HeadWallNormal;
    struct Vector3 FeetWallNormal;
    bool KinematicMode;
    bool UseCenterRayForGroundAngle;
    float ClimbWallExtraTime;
    bool CeilingRayHit;
    bool GroundRayHit;
    bool WallLeftRayHit;
    bool WallRightRayHit;
    struct Vector3 GroundRayNormal;
    struct Vector3 GroundRayPoint;
    bool GainHorizontalSpeedOffWall;
    float InheritVelocityMultiplier;
    bool Enabled;
    bool OnlyGroundMovement;
    bool SlowOnCollisionWithWall;
    bool ShouldStickToPlatforms;
    float LandAnticipationTime;
    bool feetLandAnticipationCheck;
    struct Action_1_MoonControllerColliderHit_* OnMoonControllerCollision;
    struct Action_1_UnityEngine_Collision_* OnNativeCollision;
    struct Action* OnPostUpdateCollision;
    bool m_collisionThisFrame;
    struct MoonCharacterController* m_characterController;
    struct Vector2 m_groundContactNormal;
    struct Vector2 m_ceilingContactNormal;
    struct Vector2 m_wallLeftContactNormal;
    struct Vector2 m_wallRightContactNormal;
    struct Collider* m_groundCollider;
    struct Collider* m_ceilingCollider;
    struct Collider* m_wallLeftCollider;
    struct Collider* m_wallRightCollider;
    struct DamageDealer* m_groundDamageDealer;
    struct DamageDealer* m_ceilingDamageDealer;
    struct DamageDealer* m_wallLeftDamageDealer;
    struct DamageDealer* m_wallRightDamageDealer;
    bool ApplyGroundPenetrationPrevention;
    bool _UseSafeMovementCode_k__BackingField;
    bool m_movingPlatfromsNeedUpdate;
    bool m_isSuspended;
    bool m_anticipatingLanding;
    struct RaycastHit m_antecipationRayCastHit;
    struct IKLimb__Array* FeetIK;
    bool m_feetAnticipatingLanding;
    struct List_1_CharacterPlatformMovement_ScheduledSpeedCurve_* m_scheduledSpeedCurves;
    struct CharacterPlatformMovement_KickbackEntry* m_kickback;
    struct CharacterPlatformMovement_AirSuspension* m_airSuspension;
    struct PlatformingFXFunctionality* PlatformingFxFunctionality;
    int32_t m_placeOnGroundRequestId;
    float m_climbableWallTimer;
    struct Action* OnPreApplySpeed;
    struct Action* OnPostAdjustSpeedBasedOnCollisions;
    struct Vector2 m_externalForce;
    struct Vector3 m_oldPosition;
    bool ForceStick;
    struct Vector2 AdditiveSpeed;
    struct Vector2 AdditiveLocalSpeed;
    struct Vector2 LastAdditiveSpeed;
    struct List_1_ExternalForceEntry_* m_externalForceEntries;
    float InheritedVelocityDeceleration;
    struct JobHandle m_handle;
    bool m_jobsExecuting;
    struct NativeArray_1_UnityEngine_RaycastHit_ m_raycastResults;
    struct NativeArray_1_UnityEngine_RaycastCommand_ m_raycastCommands;
    bool m_hasCreatedNativeArrays;
    struct RaycastHit__Array* m_tempResults;
    struct RaycastCommand__Array* m_cmds;
    struct Boolean__Array* m_hitResults;
    int32_t m_hitReqId;
    bool _GroundNormalIsValid_k__BackingField;
    float m_Gravity;
    bool EnableDebugDraw;
    struct Vector2 m_prevWorldSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterPlatformMovement__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_MoonControllerColliderHit_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Collision_.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/CharacterPlatformMovement_AirSuspension.h>
#include <Modloader/app/structs/CharacterPlatformMovement_KickbackEntry.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/IKLimb__Array.h>
#include <Modloader/app/structs/List_1_CharacterPlatformMovement_ScheduledSpeedCurve_.h>
#include <Modloader/app/structs/List_1_ExternalForceEntry_.h>
#include <Modloader/app/structs/MoonCharacterController.h>
#include <Modloader/app/structs/PlatformingFXFunctionality.h>
#include <Modloader/app/structs/RaycastCommand__Array.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_CharacterPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterPlatformMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterPlatformMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
