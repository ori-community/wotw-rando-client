#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyPlantVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyPlantVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyPlantVisuals_DEFINED)
#include <Modloader/app/structs/EnergyPlantVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_EnergyPlantVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_EnergyPlantVisuals_DEFINED
struct EnergyPlantVisuals__Class;
struct EnergyPlantVisuals {
    struct EnergyPlantVisuals__Class* klass;
    MonitorData* monitor;
    struct EnergyPlantVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyPlantVisuals_FWDDECL)
#define IL2CPP_STRUCT_EnergyPlantVisuals_FWDDECL
#include <Modloader/app/structs/EnergyPlantVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_EnergyPlantVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyPlantVisuals_DEFINED) && !defined(IL2CPP_STRUCT_EnergyPlantVisuals_FWDDECL)
#include <Modloader/app/structs/EnergyPlantVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyPlantVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
