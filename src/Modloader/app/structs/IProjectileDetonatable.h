#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IProjectileDetonatable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IProjectileDetonatable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IProjectileDetonatable_DEFINED)
#define IL2CPP_STRUCT_IProjectileDetonatable_DEFINED
struct IProjectileDetonatable__Class;
struct IProjectileDetonatable {
    struct IProjectileDetonatable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IProjectileDetonatable_FWDDECL)
#define IL2CPP_STRUCT_IProjectileDetonatable_FWDDECL
#include <Modloader/app/structs/IProjectileDetonatable__Class.h>
#endif
#undef IL2CPP_STRUCT_IProjectileDetonatable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IProjectileDetonatable_DEFINED) && !defined(IL2CPP_STRUCT_IProjectileDetonatable_FWDDECL)
#include <Modloader/app/structs/IProjectileDetonatable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IProjectileDetonatable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
