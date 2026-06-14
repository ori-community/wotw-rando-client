#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_ShapeModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_ShapeModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_ShapeModule_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_ShapeModule_DEFINED
struct ParticleSystem;
struct ParticleSystem_ShapeModule {
    struct ParticleSystem* m_ParticleSystem;
};
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_ShapeModule_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_ShapeModule_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystem_ShapeModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_ShapeModule_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_ShapeModule_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_ShapeModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_ShapeModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
