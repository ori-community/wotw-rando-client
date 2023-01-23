#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_DEFINED)
#include <Modloader/app/structs/TurbulenceModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TurbulenceModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_DEFINED
struct UberShaderVector;
struct UberShaderTexture;
struct TurbulenceTranslationModifier__Fields {
    struct TurbulenceModifier__Fields _;
    struct UberShaderVector* LocalSettings;
    struct UberShaderTexture* TurbulenceMask;
    struct UberShaderVector* ScaleVarSettings;
    struct UberShaderVector* BiasSettings;
    float PresetScaleMagnitude;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceTranslationModifier__Fields_FWDDECL)
#include <Modloader/app/structs/TurbulenceTranslationModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceTranslationModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
