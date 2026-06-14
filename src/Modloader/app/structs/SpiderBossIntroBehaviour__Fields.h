#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntityTask__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntityTask__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_DEFINED
struct EventTriggerAnimator;
struct SpiderBossIntroBehaviour__Fields {
    struct TimelineEntityTask__Fields _;
    struct EventTriggerAnimator* TransitionToArena1ReachedEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossIntroBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossIntroBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossIntroBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
