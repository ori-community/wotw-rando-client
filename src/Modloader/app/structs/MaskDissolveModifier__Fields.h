#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskDissolveModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskDissolveModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskDissolveModifier__Fields_DEFINED)
#include <Modloader/app/structs/AlphaCombineMode__Enum.h>
#include <Modloader/app/structs/TextureMergeMode__Enum.h>
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_TextureMergeMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_AlphaCombineMode__Enum_DEFINED)
#define IL2CPP_STRUCT_MaskDissolveModifier__Fields_DEFINED
struct UberShaderTexture;
struct UberShaderVector;
struct UberShaderColor;
struct MaskDissolveModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture* MaskTexture;
    struct UberShaderTexture* DistortTexture;
    struct UberShaderTexture* SecondaryMaskTexture;
    struct UberShaderVector* DistortStrength;
    struct UberShaderVector* SecondDistortStrength;
    struct UberShaderColor* DissolveColor;
    TextureMergeMode__Enum MaskMergeMode;

    AlphaCombineMode__Enum AlphaMergeMode;

    bool UseVertexColorAlpha;
    bool UseVertexColorRGB;
    bool ModulateDistortionStrenghtByTrailAuxA;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskDissolveModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaskDissolveModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderColor.h>
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_MaskDissolveModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskDissolveModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaskDissolveModifier__Fields_FWDDECL)
#include <Modloader/app/structs/MaskDissolveModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskDissolveModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
