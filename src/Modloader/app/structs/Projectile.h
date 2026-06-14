#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Projectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Projectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_Projectile_DEFINED)
#include <Modloader/app/structs/Projectile__Fields.h>
#if defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED)
#define IL2CPP_STRUCT_Projectile_DEFINED
struct Projectile__Class;
struct Projectile {
    struct Projectile__Class* klass;
    MonitorData* monitor;
    struct Projectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Projectile_FWDDECL)
#define IL2CPP_STRUCT_Projectile_FWDDECL
#include <Modloader/app/structs/Projectile__Class.h>
#endif
#undef IL2CPP_STRUCT_Projectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_Projectile_DEFINED) && !defined(IL2CPP_STRUCT_Projectile_FWDDECL)
#include <Modloader/app/structs/Projectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Projectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
