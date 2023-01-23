#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrabbableRope__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrabbableRope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableRope__Fields_DEFINED)
#include <Modloader/app/structs/GrabbableRope_DirectionModes__Enum.h>
#include <Modloader/app/structs/GrabbableRope_RopeModes__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_GrabbableRope_RopeModes__Enum_DEFINED) && defined(IL2CPP_STRUCT_GrabbableRope_DirectionModes__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GrabbableRope__Fields_DEFINED
struct List_1_UnityEngine_Transform_;
struct ActionMethod;
struct MoonTimeline;
struct Condition_1;
struct GrabbableRope__Fields {
    struct MonoBehaviour__Fields _;
    bool IsSlippery;
    struct List_1_UnityEngine_Transform_* Points;
    GrabbableRope_RopeModes__Enum Mode;

    struct ActionMethod* OnGrabAction;
    struct ActionMethod* OnReleaseAction;
    struct MoonTimeline* OnGrabTimeline;
    struct MoonTimeline* OnReleaseTimeline;
    bool HorisontalOrVerticalBasedOnRotation;
    GrabbableRope_DirectionModes__Enum DirectionMode;

    struct Condition_1* Condition;
    struct Vector3 m_lastForceApplied;
    bool HandStandAllowed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrabbableRope__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrabbableRope__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_GrabbableRope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableRope__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrabbableRope__Fields_FWDDECL)
#include <Modloader/app/structs/GrabbableRope__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrabbableRope__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
