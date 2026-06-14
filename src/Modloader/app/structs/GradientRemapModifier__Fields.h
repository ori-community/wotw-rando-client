#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GradientRemapModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GradientRemapModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientRemapModifier__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_GradientRemapModifier__Fields_DEFINED
struct UberShaderVector;
struct UberShaderColor;
struct GradientRemapModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderVector* GradientSettings;
    struct UberShaderColor* BaseColorA;
    struct UberShaderColor* RemapColorA;
    struct UberShaderColor* BaseColorB;
    struct UberShaderColor* RemapColorB;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GradientRemapModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_GradientRemapModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderColor.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_GradientRemapModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientRemapModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GradientRemapModifier__Fields_FWDDECL)
#include <Modloader/app/structs/GradientRemapModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GradientRemapModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
