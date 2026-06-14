#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ParticleSystemGradientMode__Enum.h>
#if defined(IL2CPP_STRUCT_ParticleSystemGradientMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_DEFINED
struct Gradient;
struct ParticleSystem_MinMaxGradient {
    ParticleSystemGradientMode__Enum m_Mode;

    struct Gradient* m_GradientMin;
    struct Gradient* m_GradientMax;
    struct Color m_ColorMin;
    struct Color m_ColorMax;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_FWDDECL
#include <Modloader/app/structs/Gradient.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
