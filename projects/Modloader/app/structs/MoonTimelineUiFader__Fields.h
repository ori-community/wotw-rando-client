#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTimelineUiFader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTimelineUiFader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFader__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTimelineUiFader__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct ForceRefreshAnimatorContext;
struct __declspec(align(8)) MoonTimelineUiFader__Fields {
    struct MoonTimeline* FadeOutTimeline;
    struct MoonTimeline* FadeInTimeline;
    struct GameObject* FadeGroup;
    struct GameObject* BlackFadeObject;
    bool RefreshTargetsEveryFade;
    struct ForceRefreshAnimatorContext* m_forceRefreshAnimatorContext;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFader__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTimelineUiFader__Fields_FWDDECL
#include <Modloader/app/structs/ForceRefreshAnimatorContext.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_MoonTimelineUiFader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTimelineUiFader__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTimelineUiFader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTimelineUiFader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
