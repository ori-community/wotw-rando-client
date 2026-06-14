#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickupOrbSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickupOrbSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupOrbSystem_DEFINED)
#include <Modloader/app/structs/PickupOrbSystem__Fields.h>
#if defined(IL2CPP_STRUCT_PickupOrbSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_PickupOrbSystem_DEFINED
struct PickupOrbSystem__Class;
struct PickupOrbSystem {
    struct PickupOrbSystem__Class* klass;
    MonitorData* monitor;
    struct PickupOrbSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickupOrbSystem_FWDDECL)
#define IL2CPP_STRUCT_PickupOrbSystem_FWDDECL
#include <Modloader/app/structs/PickupOrbSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_PickupOrbSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupOrbSystem_DEFINED) && !defined(IL2CPP_STRUCT_PickupOrbSystem_FWDDECL)
#include <Modloader/app/structs/PickupOrbSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickupOrbSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
