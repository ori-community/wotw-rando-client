#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EntityDamageEvent;
struct SpiderBossDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* TransitionTimeline;
    struct MoonTimeline* DeathTimeline;
    struct EntityDamageEvent* DeathEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
