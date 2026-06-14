#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerSeekingProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerSeekingProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSeekingProjectile_DEFINED)
#include <Modloader/app/structs/ServerSeekingProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_ServerSeekingProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerSeekingProjectile_DEFINED
struct ServerSeekingProjectile__Class;
struct ServerSeekingProjectile {
    struct ServerSeekingProjectile__Class* klass;
    MonitorData* monitor;
    struct ServerSeekingProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerSeekingProjectile_FWDDECL)
#define IL2CPP_STRUCT_ServerSeekingProjectile_FWDDECL
#include <Modloader/app/structs/ServerSeekingProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerSeekingProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSeekingProjectile_DEFINED) && !defined(IL2CPP_STRUCT_ServerSeekingProjectile_FWDDECL)
#include <Modloader/app/structs/ServerSeekingProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerSeekingProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
