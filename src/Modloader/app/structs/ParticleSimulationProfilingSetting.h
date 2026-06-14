#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSimulationProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSimulationProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSimulationProfilingSetting_DEFINED)
#include <Modloader/app/structs/ParticleSimulationProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleSimulationProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleSimulationProfilingSetting_DEFINED
struct ParticleSimulationProfilingSetting__Class;
struct ParticleSimulationProfilingSetting {
    struct ParticleSimulationProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct ParticleSimulationProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSimulationProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_ParticleSimulationProfilingSetting_FWDDECL
#include <Modloader/app/structs/ParticleSimulationProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleSimulationProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSimulationProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSimulationProfilingSetting_FWDDECL)
#include <Modloader/app/structs/ParticleSimulationProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSimulationProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
