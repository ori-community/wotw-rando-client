#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrewarmParticles_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrewarmParticles_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmParticles_DEFINED)
#include <Modloader/app/structs/PrewarmParticles__Fields.h>
#if defined(IL2CPP_STRUCT_PrewarmParticles__Fields_DEFINED)
#define IL2CPP_STRUCT_PrewarmParticles_DEFINED
struct PrewarmParticles__Class;
struct PrewarmParticles {
    struct PrewarmParticles__Class* klass;
    MonitorData* monitor;
    struct PrewarmParticles__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrewarmParticles_FWDDECL)
#define IL2CPP_STRUCT_PrewarmParticles_FWDDECL
#include <Modloader/app/structs/PrewarmParticles__Class.h>
#endif
#undef IL2CPP_STRUCT_PrewarmParticles_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmParticles_DEFINED) && !defined(IL2CPP_STRUCT_PrewarmParticles_FWDDECL)
#include <Modloader/app/structs/PrewarmParticles.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrewarmParticles.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
