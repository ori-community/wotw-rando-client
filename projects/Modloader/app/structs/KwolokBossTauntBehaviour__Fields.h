#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_DEFINED
struct List_1_Moon_Timeline_MoonTimeline_;
struct MoonTimeline;
struct KwolokBossTauntBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct List_1_Moon_Timeline_MoonTimeline_* Timelines;
    float CancelBehaviourAtDamageThreshold;
    struct MoonTimeline* m_chosenTimeline;
    float m_damageTaken;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossTauntBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossTauntBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossTauntBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
