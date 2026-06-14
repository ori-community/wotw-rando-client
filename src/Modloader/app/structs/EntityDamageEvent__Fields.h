#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityDamageEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityDamageEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDamageEvent__Fields_DEFINED)
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EntityEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EntityEvent__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageResult_DEFINED)
#define IL2CPP_STRUCT_EntityDamageEvent__Fields_DEFINED
struct EntityDamageEvent__Fields {
    struct EntityEvent__Fields _;
    struct DamageResult DamageResult;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityDamageEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityDamageEvent__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EntityDamageEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDamageEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityDamageEvent__Fields_FWDDECL)
#include <Modloader/app/structs/EntityDamageEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityDamageEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
