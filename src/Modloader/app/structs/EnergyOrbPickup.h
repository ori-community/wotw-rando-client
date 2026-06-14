#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyOrbPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyOrbPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyOrbPickup_DEFINED)
#include <Modloader/app/structs/EnergyOrbPickup__Fields.h>
#if defined(IL2CPP_STRUCT_EnergyOrbPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_EnergyOrbPickup_DEFINED
struct EnergyOrbPickup__Class;
struct EnergyOrbPickup {
    struct EnergyOrbPickup__Class* klass;
    MonitorData* monitor;
    struct EnergyOrbPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyOrbPickup_FWDDECL)
#define IL2CPP_STRUCT_EnergyOrbPickup_FWDDECL
#include <Modloader/app/structs/EnergyOrbPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_EnergyOrbPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyOrbPickup_DEFINED) && !defined(IL2CPP_STRUCT_EnergyOrbPickup_FWDDECL)
#include <Modloader/app/structs/EnergyOrbPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyOrbPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
