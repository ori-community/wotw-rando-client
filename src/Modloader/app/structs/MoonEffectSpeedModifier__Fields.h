#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_DEFINED)
#include <Modloader/app/structs/MoonEffectVariationModifier__Fields.h>
#if defined(IL2CPP_STRUCT_MoonEffectVariationModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_DEFINED
struct MoonEffectSpeedModifier__Fields {
    struct MoonEffectVariationModifier__Fields _;
    float VelocityMultiplier;
    float SimulationSpeedMultiplier;
    float GravityMultiplier;
    float LifeTimeMultiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectSpeedModifier__Fields_FWDDECL)
#include <Modloader/app/structs/MoonEffectSpeedModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectSpeedModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
