#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockOnTargetProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockOnTargetProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockOnTargetProjectile_DEFINED)
#include <Modloader/app/structs/LockOnTargetProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_LockOnTargetProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_LockOnTargetProjectile_DEFINED
struct LockOnTargetProjectile__Class;
struct LockOnTargetProjectile {
    struct LockOnTargetProjectile__Class* klass;
    MonitorData* monitor;
    struct LockOnTargetProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockOnTargetProjectile_FWDDECL)
#define IL2CPP_STRUCT_LockOnTargetProjectile_FWDDECL
#include <Modloader/app/structs/LockOnTargetProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_LockOnTargetProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockOnTargetProjectile_DEFINED) && !defined(IL2CPP_STRUCT_LockOnTargetProjectile_FWDDECL)
#include <Modloader/app/structs/LockOnTargetProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockOnTargetProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
