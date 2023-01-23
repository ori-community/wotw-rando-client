#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeashHookAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeashHookAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LeashHookAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct LeashHookVisuals;
struct MoonTimeline;
struct LeashHookAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct LeashHookVisuals* Visuals;
    struct MoonTimeline* OpenTimeline;
    struct MoonTimeline* CloseTimeline;
    struct MoonTimeline* IdleOpenedTimeline;
    struct MoonTimeline* IdleClosedTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeashHookAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeashHookAnimator__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/LeashHookVisuals.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LeashHookAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeashHookAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LeashHookAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeashHookAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
