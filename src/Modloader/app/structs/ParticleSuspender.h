#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSuspender_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSuspender_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSuspender_DEFINED)
#include <Modloader/app/structs/ParticleSuspender__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleSuspender__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleSuspender_DEFINED
struct ParticleSuspender__Class;
struct ParticleSuspender {
    struct ParticleSuspender__Class* klass;
    MonitorData* monitor;
    struct ParticleSuspender__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSuspender_FWDDECL)
#define IL2CPP_STRUCT_ParticleSuspender_FWDDECL
#include <Modloader/app/structs/ParticleSuspender__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleSuspender_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSuspender_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSuspender_FWDDECL)
#include <Modloader/app/structs/ParticleSuspender.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSuspender.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
