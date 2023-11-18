#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootProjectileBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootProjectileBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviour_DEFINED)
#include <Modloader/app/structs/ShootProjectileBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootProjectileBehaviour_DEFINED
struct ShootProjectileBehaviour__Class;
struct ShootProjectileBehaviour {
    struct ShootProjectileBehaviour__Class* klass;
    MonitorData* monitor;
    struct ShootProjectileBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviour_FWDDECL)
#define IL2CPP_STRUCT_ShootProjectileBehaviour_FWDDECL
#include <Modloader/app/structs/ShootProjectileBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_ShootProjectileBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_ShootProjectileBehaviour_FWDDECL)
#include <Modloader/app/structs/ShootProjectileBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootProjectileBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
