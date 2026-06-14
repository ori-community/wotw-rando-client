#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_DEFINED
struct PrefabSpawner;
struct DropSlugDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct PrefabSpawner* Explosion;
    float ExplosionDamage;
    DamageWeight__Enum ExplosionWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/PrefabSpawner.h>
#endif
#undef IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
