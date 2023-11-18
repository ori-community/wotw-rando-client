#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenariosParticleSystemPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenariosParticleSystemPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin_DEFINED)
#include <Modloader/app/structs/ScenariosParticleSystemPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenariosParticleSystemPlugin_DEFINED
struct ScenariosParticleSystemPlugin__Class;
struct ScenariosParticleSystemPlugin {
    struct ScenariosParticleSystemPlugin__Class* klass;
    MonitorData* monitor;
    struct ScenariosParticleSystemPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin_FWDDECL)
#define IL2CPP_STRUCT_ScenariosParticleSystemPlugin_FWDDECL
#include <Modloader/app/structs/ScenariosParticleSystemPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenariosParticleSystemPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin_DEFINED) && !defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin_FWDDECL)
#include <Modloader/app/structs/ScenariosParticleSystemPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenariosParticleSystemPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
