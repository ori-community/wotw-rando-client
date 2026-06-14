#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystemRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystemRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemRenderer_DEFINED)
#include <Modloader/app/structs/ParticleSystemRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleSystemRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleSystemRenderer_DEFINED
struct ParticleSystemRenderer__Class;
struct ParticleSystemRenderer {
    struct ParticleSystemRenderer__Class* klass;
    MonitorData* monitor;
    struct ParticleSystemRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystemRenderer_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystemRenderer_FWDDECL
#include <Modloader/app/structs/ParticleSystemRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystemRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemRenderer_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystemRenderer_FWDDECL)
#include <Modloader/app/structs/ParticleSystemRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystemRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
