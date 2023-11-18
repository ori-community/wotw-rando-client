#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskModifier__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_MaskModifier__Fields_DEFINED
struct UberShaderTexture;
struct UberShaderFloat;
struct MaskModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture* MaskTexture;
    struct UberShaderFloat* MaskStrength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaskModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderFloat.h>
#include <Modloader/app/structs/UberShaderTexture.h>
#endif
#undef IL2CPP_STRUCT_MaskModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaskModifier__Fields_FWDDECL)
#include <Modloader/app/structs/MaskModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
