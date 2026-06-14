#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_DEFINED
struct UberShaderTexture;
struct UberShaderRange;
struct UberShaderFloat;
struct UberShaderMultiplyLayerColor;
struct UberShaderVector;
struct MultiplyLayerDistortedModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture* MultiplyLayerTexture;
    struct UberShaderTexture* MultiplyLayerMaskTexture;
    struct UberShaderRange* MultiplyLayerLevelMaskSettings;
    struct UberShaderFloat* AdditiveStrength;
    struct UberShaderMultiplyLayerColor* MultiplyColor;
    struct UberShaderTexture* DistortTexture;
    struct UberShaderTexture* DistortMaskTexture;
    struct UberShaderVector* DistortStrength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderFloat.h>
#include <Modloader/app/structs/UberShaderMultiplyLayerColor.h>
#include <Modloader/app/structs/UberShaderRange.h>
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MultiplyLayerDistortedModifier__Fields_FWDDECL)
#include <Modloader/app/structs/MultiplyLayerDistortedModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplyLayerDistortedModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
