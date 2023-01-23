#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyDoorSlot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyDoorSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDoorSlot_DEFINED)
#include <Modloader/app/structs/EnergyDoorSlot__Fields.h>
#if defined(IL2CPP_STRUCT_EnergyDoorSlot__Fields_DEFINED)
#define IL2CPP_STRUCT_EnergyDoorSlot_DEFINED
struct EnergyDoorSlot__Class;
struct EnergyDoorSlot {
    struct EnergyDoorSlot__Class* klass;
    MonitorData* monitor;
    struct EnergyDoorSlot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyDoorSlot_FWDDECL)
#define IL2CPP_STRUCT_EnergyDoorSlot_FWDDECL
#include <Modloader/app/structs/EnergyDoorSlot__Class.h>
#endif
#undef IL2CPP_STRUCT_EnergyDoorSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDoorSlot_DEFINED) && !defined(IL2CPP_STRUCT_EnergyDoorSlot_FWDDECL)
#include <Modloader/app/structs/EnergyDoorSlot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyDoorSlot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
