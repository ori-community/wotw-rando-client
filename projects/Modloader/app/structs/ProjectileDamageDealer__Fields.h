#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProjectileDamageDealer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProjectileDamageDealer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileDamageDealer__Fields_DEFINED)
#include <Modloader/app/structs/DamageDealer__Fields.h>
#if defined(IL2CPP_STRUCT_DamageDealer__Fields_DEFINED)
#define IL2CPP_STRUCT_ProjectileDamageDealer__Fields_DEFINED
struct Projectile;
struct ProjectileDamageDealer__Fields {
    struct DamageDealer__Fields _;
    struct Projectile* m_projectile;
    float EnemyMultiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProjectileDamageDealer__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProjectileDamageDealer__Fields_FWDDECL
#include <Modloader/app/structs/Projectile.h>
#endif
#undef IL2CPP_STRUCT_ProjectileDamageDealer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileDamageDealer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProjectileDamageDealer__Fields_FWDDECL)
#include <Modloader/app/structs/ProjectileDamageDealer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProjectileDamageDealer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
