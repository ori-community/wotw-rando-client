#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_DEFINED)
#include <Modloader/app/structs/TurbulenceModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TurbulenceModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_DEFINED
struct UberShaderTexture;
struct UberShaderVector;
struct UberShaderFloat;
struct TurbulenceRotationModifier__Fields {
    struct TurbulenceModifier__Fields _;
    struct UberShaderTexture* TurbulenceMask;
    struct UberShaderVector* LocalSettings;
    struct UberShaderVector* RotationPivot;
    struct UberShaderVector* RotationPivotMask;
    struct UberShaderTexture* TurbulenceMask2;
    struct UberShaderVector* LocalSettingsPivot2;
    struct UberShaderVector* RotationPivot2;
    struct UberShaderVector* RotationPivotMask2;
    struct UberShaderFloat* RightDir;
    bool IgnoreTransformRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderFloat.h>
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceRotationModifier__Fields_FWDDECL)
#include <Modloader/app/structs/TurbulenceRotationModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceRotationModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
