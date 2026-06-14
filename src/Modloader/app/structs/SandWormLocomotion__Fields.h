#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/SandWormLocomotion_SpeedSetting__Enum.h>
#include <Modloader/app/structs/SandWormLocomotion_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_SandWormLocomotion_SpeedSetting__Enum_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_SandWormLocomotion_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SandWormLocomotion__Fields_DEFINED
struct RaycastHit__Array;
struct Collider__Array;
struct Transform;
struct SandWormSandDigLocomotionBehaviour;
struct TargetBreadcrumbsTracker;
struct Event_1;
struct RTPC;
struct SandWormEntity;
struct EntityLocomotionTask;
struct SandWormLocomotion__Fields {
    struct Locomotion__Fields _;
    struct RaycastHit__Array* SharedHitInfoCache;
    struct Collider__Array* SharedHitColliderCache;
    float DistanceToTarget;
    struct Transform* HeadTransform;
    struct SandWormSandDigLocomotionBehaviour* DigSandBehaviour;
    struct TargetBreadcrumbsTracker* TargetTracker;
    struct Event_1* EnterSandSound;
    struct Event_1* ExitSandSound;
    struct RTPC* IsInSandStateRtpc;
    SandWormLocomotion_SpeedSetting__Enum _CurrentSpeedSettings_k__BackingField;

    bool _HasArrivedAtTarget_k__BackingField;
    float _Gravity_k__BackingField;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    SuspendableMask__Enum _Mask_k__BackingField;

    bool _IsSuspended_k__BackingField;
    bool _IsAvoidingObstacles_k__BackingField;
    SandWormLocomotion_State__Enum m_state;

    struct Transform* m_followedTarget;
    bool m_isHeadInHabitat;
    struct SandWormEntity* m_wormEntity;
    struct EntityLocomotionTask* _DefaultFSMState_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour.h>
#include <Modloader/app/structs/TargetBreadcrumbsTracker.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SandWormLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
