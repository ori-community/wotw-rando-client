#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_DEFINED)
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_DEFINED
struct GhostGenericEventsPlugin;
struct ScenariosParticleSystemPlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    struct GhostGenericEventsPlugin* m_ghostGenericEventsPlugin;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_FWDDECL
#include <Modloader/app/structs/GhostGenericEventsPlugin.h>
#endif
#undef IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenariosParticleSystemPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/ScenariosParticleSystemPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenariosParticleSystemPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
