#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSimulationProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSimulationProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSimulationProfilingSetting_DEFINED)
#include <Modloader/app/structs/WaterSimulationProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_WaterSimulationProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterSimulationProfilingSetting_DEFINED
struct WaterSimulationProfilingSetting__Class;
struct WaterSimulationProfilingSetting {
    struct WaterSimulationProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct WaterSimulationProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterSimulationProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_WaterSimulationProfilingSetting_FWDDECL
#include <Modloader/app/structs/WaterSimulationProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterSimulationProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSimulationProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_WaterSimulationProfilingSetting_FWDDECL)
#include <Modloader/app/structs/WaterSimulationProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSimulationProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
