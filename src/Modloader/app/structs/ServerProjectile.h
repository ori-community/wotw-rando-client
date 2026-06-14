#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerProjectile_DEFINED)
#include <Modloader/app/structs/ServerProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_ServerProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerProjectile_DEFINED
struct ServerProjectile__Class;
struct ServerProjectile {
    struct ServerProjectile__Class* klass;
    MonitorData* monitor;
    struct ServerProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerProjectile_FWDDECL)
#define IL2CPP_STRUCT_ServerProjectile_FWDDECL
#include <Modloader/app/structs/ServerProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerProjectile_DEFINED) && !defined(IL2CPP_STRUCT_ServerProjectile_FWDDECL)
#include <Modloader/app/structs/ServerProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
