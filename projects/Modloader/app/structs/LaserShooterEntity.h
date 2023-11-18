#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterEntity_DEFINED)
#include <Modloader/app/structs/LaserShooterEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LaserShooterEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserShooterEntity_DEFINED
struct LaserShooterEntity__Class;
struct LaserShooterEntity {
    struct LaserShooterEntity__Class* klass;
    MonitorData* monitor;
    struct LaserShooterEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterEntity_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterEntity_FWDDECL
#include <Modloader/app/structs/LaserShooterEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterEntity_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterEntity_FWDDECL)
#include <Modloader/app/structs/LaserShooterEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
