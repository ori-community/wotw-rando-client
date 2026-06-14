#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystemExtensionsImpl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystemExtensionsImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemExtensionsImpl_DEFINED)
#define IL2CPP_STRUCT_ParticleSystemExtensionsImpl_DEFINED
struct ParticleSystemExtensionsImpl__Class;
struct ParticleSystemExtensionsImpl {
    struct ParticleSystemExtensionsImpl__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystemExtensionsImpl_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystemExtensionsImpl_FWDDECL
#include <Modloader/app/structs/ParticleSystemExtensionsImpl__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystemExtensionsImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemExtensionsImpl_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystemExtensionsImpl_FWDDECL)
#include <Modloader/app/structs/ParticleSystemExtensionsImpl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystemExtensionsImpl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
