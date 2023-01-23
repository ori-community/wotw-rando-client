#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityDeathEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityDeathEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDeathEvent__Fields_DEFINED)
#include <Modloader/app/structs/EntityDamageEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EntityDamageEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityDeathEvent__Fields_DEFINED
struct EntityDeathEvent__Fields {
    struct EntityDamageEvent__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityDeathEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityDeathEvent__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EntityDeathEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDeathEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityDeathEvent__Fields_FWDDECL)
#include <Modloader/app/structs/EntityDeathEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityDeathEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
