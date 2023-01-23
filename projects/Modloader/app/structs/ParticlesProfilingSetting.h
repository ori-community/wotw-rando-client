#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticlesProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticlesProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticlesProfilingSetting_DEFINED)
#include <Modloader/app/structs/ParticlesProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_ParticlesProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticlesProfilingSetting_DEFINED
struct ParticlesProfilingSetting__Class;
struct ParticlesProfilingSetting {
    struct ParticlesProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct ParticlesProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticlesProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_ParticlesProfilingSetting_FWDDECL
#include <Modloader/app/structs/ParticlesProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticlesProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticlesProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_ParticlesProfilingSetting_FWDDECL)
#include <Modloader/app/structs/ParticlesProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticlesProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
