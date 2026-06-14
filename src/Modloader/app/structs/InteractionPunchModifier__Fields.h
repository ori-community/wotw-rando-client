#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionPunchModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionPunchModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier__Fields_DEFINED)
#include <Modloader/app/structs/UberInteractionModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberInteractionModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionPunchModifier__Fields_DEFINED
struct UberShaderTexture;
struct UberShaderVector;
struct InteractionPunchModifier__Fields {
    struct UberInteractionModifier__Fields _;
    struct UberShaderTexture* Mask_1;
    float Strength;
    struct UberShaderVector* Settings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionPunchModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_InteractionPunchModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionPunchModifier__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionPunchModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionPunchModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
