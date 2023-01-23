#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_CollisionModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_CollisionModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_CollisionModule_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_CollisionModule_DEFINED
struct ParticleSystem;
struct ParticleSystem_CollisionModule {
    struct ParticleSystem* m_ParticleSystem;
};
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_CollisionModule_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_CollisionModule_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystem_CollisionModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_CollisionModule_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_CollisionModule_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_CollisionModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_CollisionModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
