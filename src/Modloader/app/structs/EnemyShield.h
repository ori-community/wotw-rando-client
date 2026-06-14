#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyShield_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyShield_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyShield_DEFINED)
#include <Modloader/app/structs/EnemyShield__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyShield__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyShield_DEFINED
struct EnemyShield__Class;
struct EnemyShield {
    struct EnemyShield__Class* klass;
    MonitorData* monitor;
    struct EnemyShield__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyShield_FWDDECL)
#define IL2CPP_STRUCT_EnemyShield_FWDDECL
#include <Modloader/app/structs/EnemyShield__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyShield_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyShield_DEFINED) && !defined(IL2CPP_STRUCT_EnemyShield_FWDDECL)
#include <Modloader/app/structs/EnemyShield.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyShield.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
