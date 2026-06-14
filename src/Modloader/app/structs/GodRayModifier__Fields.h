#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GodRayModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GodRayModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GodRayModifier__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GodRayModifier_RenderMode__Enum.h>
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_GodRayModifier_RenderMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_GodRayModifier__Fields_DEFINED
struct GodRayModifier__Fields {
    struct UberShaderModifier__Fields _;
    float decay;
    float exposure;
    float atmosphereDensity;
    float weight;
    float _GodRayContrast;
    float _GodRayContrastCentre;
    float _GodRayVisibilitySize;
    float eyeAdaptation;
    float _GodRayBloomBG;
    float _GodRayBloomFG;
    float _GodRayFactorAdditive;
    float _GodRayFactorModulate;
    struct Vector3 LightCenter;
    GodRayModifier_RenderMode__Enum renderMode;

    struct Color shadowColor;
    bool _Renderered_k__BackingField;
    bool perfWarning;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GodRayModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_GodRayModifier__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GodRayModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GodRayModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GodRayModifier__Fields_FWDDECL)
#include <Modloader/app/structs/GodRayModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GodRayModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
