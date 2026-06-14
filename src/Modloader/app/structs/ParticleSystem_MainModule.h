#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_MainModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_MainModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_MainModule_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_MainModule_DEFINED
struct ParticleSystem;
struct ParticleSystem_MainModule {
    struct ParticleSystem* m_ParticleSystem;
};
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_MainModule_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_MainModule_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystem_MainModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_MainModule_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_MainModule_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_MainModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_MainModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
