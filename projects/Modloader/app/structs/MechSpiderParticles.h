#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MechSpiderParticles_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MechSpiderParticles_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderParticles_DEFINED)
#include <Modloader/app/structs/MechSpiderParticles__Fields.h>
#if defined(IL2CPP_STRUCT_MechSpiderParticles__Fields_DEFINED)
#define IL2CPP_STRUCT_MechSpiderParticles_DEFINED
struct MechSpiderParticles__Class;
struct MechSpiderParticles {
    struct MechSpiderParticles__Class* klass;
    MonitorData* monitor;
    struct MechSpiderParticles__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MechSpiderParticles_FWDDECL)
#define IL2CPP_STRUCT_MechSpiderParticles_FWDDECL
#include <Modloader/app/structs/MechSpiderParticles__Class.h>
#endif
#undef IL2CPP_STRUCT_MechSpiderParticles_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderParticles_DEFINED) && !defined(IL2CPP_STRUCT_MechSpiderParticles_FWDDECL)
#include <Modloader/app/structs/MechSpiderParticles.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MechSpiderParticles.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
