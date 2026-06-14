#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleAutodestruct_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleAutodestruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleAutodestruct_DEFINED)
#include <Modloader/app/structs/ParticleAutodestruct__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleAutodestruct__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleAutodestruct_DEFINED
struct ParticleAutodestruct__Class;
struct ParticleAutodestruct {
    struct ParticleAutodestruct__Class* klass;
    MonitorData* monitor;
    struct ParticleAutodestruct__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleAutodestruct_FWDDECL)
#define IL2CPP_STRUCT_ParticleAutodestruct_FWDDECL
#include <Modloader/app/structs/ParticleAutodestruct__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleAutodestruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleAutodestruct_DEFINED) && !defined(IL2CPP_STRUCT_ParticleAutodestruct_FWDDECL)
#include <Modloader/app/structs/ParticleAutodestruct.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleAutodestruct.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
