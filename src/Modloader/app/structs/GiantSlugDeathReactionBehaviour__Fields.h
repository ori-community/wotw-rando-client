#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_DEFINED
struct GameObject__Array;
struct PrefabSpawner;
struct DeathStartEffectSpawnSetting;
struct GiantSlugDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct GameObject__Array* Slugs;
    struct PrefabSpawner* Explosion;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#endif
#undef IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GiantSlugDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GiantSlugDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GiantSlugDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
