#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_DEFINED)
#include <Modloader/app/structs/DamageResultType__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#if defined(IL2CPP_STRUCT_DamageResultType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_DEFINED
struct EntityHitReaction_KickbackMultiplierSet;
struct __declspec(align(8)) EntityHitReaction_KickbackRuleOverride__Fields {
    DamageResultType__Enum DamageResultType;

    DamageType__Enum DamageType;

    struct EntityHitReaction_KickbackMultiplierSet* Mulipliers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_FWDDECL
#include <Modloader/app/structs/EntityHitReaction_KickbackMultiplierSet.h>
#endif
#undef IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityHitReaction_KickbackRuleOverride__Fields_FWDDECL)
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverride__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverride__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
