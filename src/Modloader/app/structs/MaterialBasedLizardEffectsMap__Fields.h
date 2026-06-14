#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_DEFINED)
#include <Modloader/app/structs/MaterialBasedResourceMap__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialBasedResourceMap__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_DEFINED
struct LizardMovementEffects;
struct MaterialBasedLizardMovementEffects__Array;
struct LizardAttackEffects;
struct MaterialBasedLizardAttackEffects__Array;
struct MaterialBasedLizardEffectsMap__Fields {
    struct MaterialBasedResourceMap__Fields _;
    struct LizardMovementEffects* DefaultMovementEffects;
    struct MaterialBasedLizardMovementEffects__Array* MovementEffects;
    struct LizardAttackEffects* DefaultAttackEffects;
    struct MaterialBasedLizardAttackEffects__Array* AttackEffects;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_FWDDECL
#include <Modloader/app/structs/LizardAttackEffects.h>
#include <Modloader/app/structs/LizardMovementEffects.h>
#include <Modloader/app/structs/MaterialBasedLizardAttackEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedLizardMovementEffects__Array.h>
#endif
#undef IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaterialBasedLizardEffectsMap__Fields_FWDDECL)
#include <Modloader/app/structs/MaterialBasedLizardEffectsMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialBasedLizardEffectsMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
