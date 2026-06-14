#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyDoor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyDoor_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDoor_DEFINED)
#include <Modloader/app/structs/EnergyDoor__Fields.h>
#if defined(IL2CPP_STRUCT_EnergyDoor__Fields_DEFINED)
#define IL2CPP_STRUCT_EnergyDoor_DEFINED
struct EnergyDoor__Class;
struct EnergyDoor {
    struct EnergyDoor__Class* klass;
    MonitorData* monitor;
    struct EnergyDoor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyDoor_FWDDECL)
#define IL2CPP_STRUCT_EnergyDoor_FWDDECL
#include <Modloader/app/structs/EnergyDoor__Class.h>
#endif
#undef IL2CPP_STRUCT_EnergyDoor_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDoor_DEFINED) && !defined(IL2CPP_STRUCT_EnergyDoor_FWDDECL)
#include <Modloader/app/structs/EnergyDoor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyDoor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
