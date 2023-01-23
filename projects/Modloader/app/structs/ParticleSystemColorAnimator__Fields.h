#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ParticleSystemAnimator_1__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleSystemAnimator_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_DEFINED
struct ParticleSystemColorAnimator__Fields {
    struct ParticleSystemAnimator_1__Fields _;
    struct Color TargetColor;
    struct Color m_originalColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystemColorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ParticleSystemColorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystemColorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
