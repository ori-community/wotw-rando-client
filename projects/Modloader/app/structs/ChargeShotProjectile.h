#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChargeShotProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChargeShotProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeShotProjectile_DEFINED)
#include <Modloader/app/structs/ChargeShotProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_ChargeShotProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_ChargeShotProjectile_DEFINED
struct ChargeShotProjectile__Class;
struct ChargeShotProjectile {
    struct ChargeShotProjectile__Class* klass;
    MonitorData* monitor;
    struct ChargeShotProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChargeShotProjectile_FWDDECL)
#define IL2CPP_STRUCT_ChargeShotProjectile_FWDDECL
#include <Modloader/app/structs/ChargeShotProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_ChargeShotProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeShotProjectile_DEFINED) && !defined(IL2CPP_STRUCT_ChargeShotProjectile_FWDDECL)
#include <Modloader/app/structs/ChargeShotProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChargeShotProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
