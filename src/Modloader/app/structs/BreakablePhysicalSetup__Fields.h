#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_DEFINED
struct BreakablePhysicalSetupHolder;
struct GameObject__Array;
struct Condition_1;
struct PhysicalSystemManager;
struct MoonTimeline;
struct EventTriggerAnimator;
struct List_1_UnityEngine_Vector3_;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct BreakablePhysicalSetup__Fields {
    struct MonoBehaviour__Fields _;
    float DELAY_BEFORE_BREAKING;
    struct BreakablePhysicalSetupHolder* Setup;
    bool PerformStateChange;
    struct GameObject__Array* BreakableJoints;
    float MinimumBreakDistance;
    struct Condition_1* BreakCondition;
    struct PhysicalSystemManager* PhysicalSystemManager;
    struct MoonTimeline* breakTimeline;
    struct EventTriggerAnimator* BreakJointsTrigger;
    struct EventTriggerAnimator* DisableManagerTrigger;
    float RandomTorqueAll;
    float ClosestRadiusToApplyForce;
    float RandomTorqueClosestJoints;
    struct List_1_UnityEngine_Vector3_* m_jointStartingPoints;
    float m_delayBeforeBreaking;
    struct Vector3 m_breakingPoint;
    float m_originalStateValue;
    struct IUberState__Array* m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_FWDDECL
#include <Modloader/app/structs/BreakablePhysicalSetupHolder.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#endif
#undef IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_FWDDECL)
#include <Modloader/app/structs/BreakablePhysicalSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakablePhysicalSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
