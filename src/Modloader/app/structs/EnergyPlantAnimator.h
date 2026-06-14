#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyPlantAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyPlantAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyPlantAnimator_DEFINED)
#include <Modloader/app/structs/EnergyPlantAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EnergyPlantAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_EnergyPlantAnimator_DEFINED
struct EnergyPlantAnimator__Class;
struct EnergyPlantAnimator {
    struct EnergyPlantAnimator__Class* klass;
    MonitorData* monitor;
    struct EnergyPlantAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyPlantAnimator_FWDDECL)
#define IL2CPP_STRUCT_EnergyPlantAnimator_FWDDECL
#include <Modloader/app/structs/EnergyPlantAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_EnergyPlantAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyPlantAnimator_DEFINED) && !defined(IL2CPP_STRUCT_EnergyPlantAnimator_FWDDECL)
#include <Modloader/app/structs/EnergyPlantAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyPlantAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
