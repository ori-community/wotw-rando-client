#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovement__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_PlatformMovement__Fields_DEFINED
struct DynamicDataResolver;
struct IsOnCollisionState;
struct StringBuilder;
struct CapsuleCollider;
struct MovingPlatformsController;
struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_;
struct List_1_UnityEngine_GameObject_;
struct Rigidbody;
struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_;
struct Action;
struct PlatformMovement__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct IsOnCollisionState* Ceiling;
    struct IsOnCollisionState* Ground;
    struct IsOnCollisionState* WallLeft;
    struct IsOnCollisionState* WallRight;
    struct Vector3 CeilingNormal;
    struct Vector3 GroundNormal;
    struct Vector3 WallRightNormal;
    struct Vector3 WallLeftNormal;
    float fallTime;
    float landTime;
    float ClimbableWallAngleLimit;
    float LastTimeOnGround;
    bool m_inPrewarmed;
    bool m_areComponentsCached;
    struct Vector3 m_localSpeed;
    float m_gravityAngle;
    SurfaceMaterialType__Enum m_groundSurfaceMaterialType;

    struct StringBuilder* m_speedHistorySinceLastFrame;
    struct CapsuleCollider* m_capsuleCollider;
    float m_cachedCapsuleRadius;
    float m_cachedCapsuleHeight;
    struct MovingPlatformsController* m_movingPlatform;
    struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_* m_cacheObjectToGrabbableSurfaces;
    struct List_1_UnityEngine_GameObject_* m_removeObjects;
    int32_t m_pruneRemainingFrameDelay;
    bool DebugVelocity;
    bool DebugRootMotion;
    bool m_insideUpdate;
    struct Vector3 m_prevPosition;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_savePositionOverrideValue;
    bool m_shouldOverridePositionNextSave;
    SuspendableMask__Enum m_suspensionMask;

    struct Vector3 _LastOnGroundPosition_k__BackingField;
    float _LastOnGroundTime_k__BackingField;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_* OnCollisionGroundEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_* OnCollisionCeilingEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_* OnCollisionWallLeftEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_* OnCollisionWallRightEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_* OnLandOnGroundEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_* OnLandOnWallLeftEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_* OnLandOnWallRightEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_* OnLandOnCeilingEvent;
    struct Action* OnHitWater;
    bool ForceKeepInAir;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlatformMovement__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_2_UnityEngine_Vector3_UnityEngine_Collider_.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_GrabbableSurface_.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/IsOnCollisionState.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MovingPlatformsController.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_PlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlatformMovement__Fields_FWDDECL)
#include <Modloader/app/structs/PlatformMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
