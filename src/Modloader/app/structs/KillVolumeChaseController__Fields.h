#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KillVolumeChaseController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KillVolumeChaseController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KillVolumeChaseController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_KillVolumeChaseController__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_ScalableAnimationPlayer_;
struct Transform;
struct RubberBandedValueProvider;
struct KillVolumeChaseController__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* EscapeTimeline;
    struct List_1_Moon_ScalableAnimationPlayer_* m_scalableAnimations;
    struct Transform* ReferencePosition;
    struct RubberBandedValueProvider* RubberBanding;
    SuspendableMask__Enum _Mask_k__BackingField;

    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KillVolumeChaseController__Fields_FWDDECL)
#define IL2CPP_STRUCT_KillVolumeChaseController__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RubberBandedValueProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KillVolumeChaseController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KillVolumeChaseController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KillVolumeChaseController__Fields_FWDDECL)
#include <Modloader/app/structs/KillVolumeChaseController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KillVolumeChaseController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
