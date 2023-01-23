#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct Action;
struct CollapsingPlatformVisuals;
struct MoonTimeline;
struct EventTriggerAnimator__Array;
struct List_1_UnityEngine_Renderer_;
struct CollapsingPlatformAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct Action* OnActivatePlatform;
    struct CollapsingPlatformVisuals* Visuals;
    struct MoonTimeline* CollapseTimeline;
    struct MoonTimeline* CollapseFastTimeline;
    struct MoonTimeline* RespawnTimeline;
    struct EventTriggerAnimator__Array* ActivatePlatformTriggers;
    struct List_1_UnityEngine_Renderer_* m_renderers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CollapsingPlatformVisuals.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollapsingPlatformAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/CollapsingPlatformAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollapsingPlatformAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
