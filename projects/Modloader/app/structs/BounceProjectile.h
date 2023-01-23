#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BounceProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BounceProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_BounceProjectile_DEFINED)
#include <Modloader/app/structs/BounceProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_BounceProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_BounceProjectile_DEFINED
struct BounceProjectile__Class;
struct BounceProjectile {
    struct BounceProjectile__Class* klass;
    MonitorData* monitor;
    struct BounceProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BounceProjectile_FWDDECL)
#define IL2CPP_STRUCT_BounceProjectile_FWDDECL
#include <Modloader/app/structs/BounceProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_BounceProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_BounceProjectile_DEFINED) && !defined(IL2CPP_STRUCT_BounceProjectile_FWDDECL)
#include <Modloader/app/structs/BounceProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BounceProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
