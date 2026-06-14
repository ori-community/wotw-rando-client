#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_DEFINED
struct __declspec(align(8)) PrewarmParticles_PrewarmParticleSystemParticle__Fields {
    struct Vector3 Position;
    struct Vector3 Velocity;
    float Lifetime;
    float StartLifetime;
    float Size;
    struct Vector3 AxisOfRotation;
    float Rotation;
    float AngularVelocity;
    struct Color Color;
    uint32_t RandomSeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_FWDDECL)
#define IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PrewarmParticles_PrewarmParticleSystemParticle__Fields_FWDDECL)
#include <Modloader/app/structs/PrewarmParticles_PrewarmParticleSystemParticle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrewarmParticles_PrewarmParticleSystemParticle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
