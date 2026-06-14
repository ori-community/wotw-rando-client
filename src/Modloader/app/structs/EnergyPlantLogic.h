#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyPlantLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyPlantLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyPlantLogic_DEFINED)
#include <Modloader/app/structs/EnergyPlantLogic__Fields.h>
#if defined(IL2CPP_STRUCT_EnergyPlantLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_EnergyPlantLogic_DEFINED
struct EnergyPlantLogic__Class;
struct EnergyPlantLogic {
    struct EnergyPlantLogic__Class* klass;
    MonitorData* monitor;
    struct EnergyPlantLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyPlantLogic_FWDDECL)
#define IL2CPP_STRUCT_EnergyPlantLogic_FWDDECL
#include <Modloader/app/structs/EnergyPlantLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_EnergyPlantLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyPlantLogic_DEFINED) && !defined(IL2CPP_STRUCT_EnergyPlantLogic_FWDDECL)
#include <Modloader/app/structs/EnergyPlantLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyPlantLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
