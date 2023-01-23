#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Lever__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Lever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lever__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/LeverDirections__Enum.h>
#include <Modloader/app/structs/LeverMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LeverDirections__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_LeverMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Lever__Fields_DEFINED
struct Transform;
struct MoonTimeline;
struct LeverSetupHolder;
struct MoonReference_1_IStateTransitionHolder_;
struct Condition_1;
struct IUberState__Array;
struct Action;
struct Func_1_Boolean_;
struct Lever__Fields {
    struct MonoBehaviour__Fields _;
    bool _InRange_k__BackingField;
    bool _IsGrabbed_k__BackingField;
    float LeverRadius;
    bool SnapToGround;
    struct Transform* RotatingHandle;
    float LeverGroundOffset;
    float SeinGroundOffset;
    struct MoonTimeline* GrabLeverTimeline;
    struct MoonTimeline* ReleaseLeverTimeline;
    struct MoonTimeline* LeverLeftTimeline;
    struct MoonTimeline* LeverMiddleTimeline;
    struct MoonTimeline* LeverRightTimeline;
    LeverDirections__Enum LeverDirection;

    struct LeverSetupHolder* SetupStates;
    struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
    bool CreateCheckpoint;
    LeverDirections__Enum _OriginalDirection_k__BackingField;

    struct Condition_1* CanGrabCondition;
    struct Bounds m_bounds;
    bool m_insideFrustum;
    LeverMode__Enum LeverKind;

    struct Transform* m_transform;
    struct IUberState__Array* m_affectingUberStates;
    bool m_autoadjustedtoGroundLevel;
    float m_grabbedTime;
    float HandleRotationSpeed;
    float MaxAngularSpeed;
    float delayBeforeHandleRotation;
    struct Action* m_grabLeverEvent;
    struct Action* m_releaseLeverEvent;
    struct Action* m_leverLeftEvent;
    struct Action* m_leverRightEvent;
    struct Action* m_leverLeftFailedEvent;
    struct Action* m_leverRightFailedEvent;
    struct Action* m_leverMiddleEvent;
    struct Action* m_leverEnterEvent;
    struct Action* m_leverExitEvent;
    struct Func_1_Boolean_* m_canLeverLeft;
    struct Func_1_Boolean_* m_canLeverRight;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Lever__Fields_FWDDECL)
#define IL2CPP_STRUCT_Lever__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/LeverSetupHolder.h>
#include <Modloader/app/structs/MoonReference_1_IStateTransitionHolder_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Lever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lever__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Lever__Fields_FWDDECL)
#include <Modloader/app/structs/Lever__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Lever__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
