#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShotProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShotProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShotProjectile_DEFINED)
#include <Modloader/app/structs/SpiritShotProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritShotProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShotProjectile_DEFINED
struct SpiritShotProjectile__Class;
struct SpiritShotProjectile {
    struct SpiritShotProjectile__Class* klass;
    MonitorData* monitor;
    struct SpiritShotProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShotProjectile_FWDDECL)
#define IL2CPP_STRUCT_SpiritShotProjectile_FWDDECL
#include <Modloader/app/structs/SpiritShotProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritShotProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShotProjectile_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShotProjectile_FWDDECL)
#include <Modloader/app/structs/SpiritShotProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShotProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
