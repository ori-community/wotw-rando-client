#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DoorAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct DoorVisuals;
struct MoonTimeline;
struct DoorAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct DoorVisuals* Visuals;
    struct MoonTimeline* OpenTimeline;
    struct MoonTimeline* CloseTimeline;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_DoorAnimator__Fields_FWDDECL
#include <Modloader/app/structs/DoorVisuals.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_DoorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DoorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/DoorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
