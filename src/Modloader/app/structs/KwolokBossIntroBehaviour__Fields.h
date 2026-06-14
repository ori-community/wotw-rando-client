#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct KwolokBossIntroBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* IntroTimeline;
    struct EventTriggerAnimator* StartEscapeTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossIntroBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossIntroBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossIntroBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
