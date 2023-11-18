#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectWisps__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectWisps__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonEffectWisps__Fields_DEFINED
struct GameObject;
struct MoonEffectMainColorModifierWisps;
struct MoonEffectMaskDissolveColorModifierWisps;
struct MoonEffectTintColorModifierWisps;
struct MoonEffectEmissivityModifierWisps;
struct MoonEffectSizeModifier;
struct MoonEffectEmissionRateModifier;
struct MoonEffectSpeedModifier;
struct MoonEffectShapeModifier;
struct MoonEffectCollisionModifierWisps;
struct List_1_Moon_EffectsFramework_MoonEffectVariationModifier_;
struct __declspec(align(8)) MoonEffectWisps__Fields {
    bool m_isDirty;
    struct GameObject* EffectPrefab;
    struct MoonEffectMainColorModifierWisps* Color;
    struct MoonEffectMaskDissolveColorModifierWisps* DissolveColor;
    struct MoonEffectTintColorModifierWisps* TintColor;
    struct MoonEffectEmissivityModifierWisps* Emissivity;
    struct MoonEffectSizeModifier* Size;
    struct MoonEffectEmissionRateModifier* EmissionRate;
    struct MoonEffectSpeedModifier* Speed;
    struct MoonEffectShapeModifier* Shape;
    struct MoonEffectCollisionModifierWisps* Collision;
    struct List_1_Moon_EffectsFramework_MoonEffectVariationModifier_* m_allModifiers;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectWisps__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectWisps__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_EffectsFramework_MoonEffectVariationModifier_.h>
#include <Modloader/app/structs/MoonEffectCollisionModifierWisps.h>
#include <Modloader/app/structs/MoonEffectEmissionRateModifier.h>
#include <Modloader/app/structs/MoonEffectEmissivityModifierWisps.h>
#include <Modloader/app/structs/MoonEffectMainColorModifierWisps.h>
#include <Modloader/app/structs/MoonEffectMaskDissolveColorModifierWisps.h>
#include <Modloader/app/structs/MoonEffectShapeModifier.h>
#include <Modloader/app/structs/MoonEffectSizeModifier.h>
#include <Modloader/app/structs/MoonEffectSpeedModifier.h>
#include <Modloader/app/structs/MoonEffectTintColorModifierWisps.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectWisps__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectWisps__Fields_FWDDECL)
#include <Modloader/app/structs/MoonEffectWisps__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectWisps__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
