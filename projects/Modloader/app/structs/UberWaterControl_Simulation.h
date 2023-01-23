#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterControl_Simulation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterControl_Simulation_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_Simulation_DEFINED)
#define IL2CPP_STRUCT_UberWaterControl_Simulation_DEFINED
struct UberWaterControl_Simulation__Class;
struct UberWaterControl_Simulation {
    struct UberWaterControl_Simulation__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberWaterControl_Simulation_FWDDECL)
#define IL2CPP_STRUCT_UberWaterControl_Simulation_FWDDECL
#include <Modloader/app/structs/UberWaterControl_Simulation__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterControl_Simulation_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_Simulation_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterControl_Simulation_FWDDECL)
#include <Modloader/app/structs/UberWaterControl_Simulation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterControl_Simulation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
