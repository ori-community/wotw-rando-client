#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HomingProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HomingProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_HomingProjectile_DEFINED)
#include <Modloader/app/structs/HomingProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_HomingProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_HomingProjectile_DEFINED
struct HomingProjectile__Class;
struct HomingProjectile {
    struct HomingProjectile__Class* klass;
    MonitorData* monitor;
    struct HomingProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HomingProjectile_FWDDECL)
#define IL2CPP_STRUCT_HomingProjectile_FWDDECL
#include <Modloader/app/structs/HomingProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_HomingProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_HomingProjectile_DEFINED) && !defined(IL2CPP_STRUCT_HomingProjectile_FWDDECL)
#include <Modloader/app/structs/HomingProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HomingProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
