#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestrictAbilityController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestrictAbilityController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestrictAbilityController__StaticFields_DEFINED)
#include <Modloader/app/structs/SeinAbilityRestrictZoneMask__Enum.h>
#if defined(IL2CPP_STRUCT_SeinAbilityRestrictZoneMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RestrictAbilityController__StaticFields_DEFINED
struct AnimationSwapSet;
struct RestrictAbilityController__StaticFields {
    struct AnimationSwapSet* _AnimationSet_k__BackingField;
    SeinAbilityRestrictZoneMask__Enum m_restrictedAbilities;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestrictAbilityController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RestrictAbilityController__StaticFields_FWDDECL
#include <Modloader/app/structs/AnimationSwapSet.h>
#endif
#undef IL2CPP_STRUCT_RestrictAbilityController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestrictAbilityController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RestrictAbilityController__StaticFields_FWDDECL)
#include <Modloader/app/structs/RestrictAbilityController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestrictAbilityController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
