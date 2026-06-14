#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpShotProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpShotProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShotProjectile_DEFINED)
#include <Modloader/app/structs/JumpShotProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_JumpShotProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_JumpShotProjectile_DEFINED
struct JumpShotProjectile__Class;
struct JumpShotProjectile {
    struct JumpShotProjectile__Class* klass;
    MonitorData* monitor;
    struct JumpShotProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpShotProjectile_FWDDECL)
#define IL2CPP_STRUCT_JumpShotProjectile_FWDDECL
#include <Modloader/app/structs/JumpShotProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_JumpShotProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShotProjectile_DEFINED) && !defined(IL2CPP_STRUCT_JumpShotProjectile_FWDDECL)
#include <Modloader/app/structs/JumpShotProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpShotProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
