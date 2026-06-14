#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyLever__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyLever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyLever__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/LeverDirections__Enum.h>
#include <Modloader/app/structs/LeverMode__Enum.h>
#include <Modloader/app/structs/RecordableObject__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_RecordableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_LeverDirections__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_LeverMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyLever__Fields_DEFINED
struct LegacyAnimator__Array;
struct Condition_1;
struct SoundHost;
struct Transform;
struct Action;
struct Func_1_Boolean_;
struct LegacyLever__Fields {
    struct RecordableObject__Fields _;
    bool _InRange_k__BackingField;
    bool _IsGrabbed_k__BackingField;
    float LeverRadius;
    bool SnapToGround;
    LeverDirections__Enum LeverDirection;

    LeverDirections__Enum _OriginalDirection_k__BackingField;

    struct LegacyAnimator__Array* HighlightAnimators;
    struct Condition_1* CanGrabCondition;
    struct Bounds m_bounds;
    bool m_insideFrustum;
    LeverMode__Enum LeverKind;

    struct SoundHost* m_soundHost;
    struct Transform* m_transform;
    bool m_autoadjustedtoGroundLevel;
    float m_grabbedTime;
    float HandleRotationSpeed;
    float HandleRotationAmount;
    float MaxAngularSpeed;
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
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyLever__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyLever__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyLever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyLever__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyLever__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyLever__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyLever__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
