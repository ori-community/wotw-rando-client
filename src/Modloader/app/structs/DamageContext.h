#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageContext_DEFINED)
#define IL2CPP_STRUCT_DamageContext_DEFINED
struct Damage;
struct DamageContext {
    struct Damage* m_damage;
};
#endif
#if !defined(IL2CPP_STRUCT_DamageContext_FWDDECL)
#define IL2CPP_STRUCT_DamageContext_FWDDECL
#include <Modloader/app/structs/Damage.h>
#endif
#undef IL2CPP_STRUCT_DamageContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageContext_DEFINED) && !defined(IL2CPP_STRUCT_DamageContext_FWDDECL)
#include <Modloader/app/structs/DamageContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
