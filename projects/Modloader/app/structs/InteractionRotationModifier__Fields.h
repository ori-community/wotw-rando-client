#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionRotationModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionRotationModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier__Fields_DEFINED)
#include <Modloader/app/structs/InteractionRotationModifier_AudioType__Enum.h>
#include <Modloader/app/structs/UberInteractionModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberInteractionModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_InteractionRotationModifier_AudioType__Enum_DEFINED)
#define IL2CPP_STRUCT_InteractionRotationModifier__Fields_DEFINED
struct UberShaderTexture;
struct UberShaderVector;
struct InteractionRotationModifier__Fields {
    struct UberInteractionModifier__Fields _;
    struct UberShaderTexture* DistortionMask;
    InteractionRotationModifier_AudioType__Enum Sound;

    float Strength;
    struct UberShaderVector* Settings;
    struct UberShaderVector* Pivot;
    float m_lastSoundPlay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionRotationModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_InteractionRotationModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionRotationModifier__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionRotationModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionRotationModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
