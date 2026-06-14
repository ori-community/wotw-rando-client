#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_DEFINED
struct MoonTrail_MoonTrailParticle {
    struct Vector3 Position;
    struct Vector3 Normal;
    struct Vector3 Binormal;
    struct Vector3 Tangent;
    struct Color Color;
    float Lifetime;
    float OriginalLifetime;
    float Thickness;
    float InitialThickness;
    float TempLenghtFromStart;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_FWDDECL)
#define IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrail_MoonTrailParticle_FWDDECL)
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
