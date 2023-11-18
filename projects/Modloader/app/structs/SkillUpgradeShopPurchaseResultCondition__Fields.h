#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/PurchaseResult__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_PurchaseResult__Enum_DEFINED)
#define IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_DEFINED
struct SkillUpgradeShopPurchaseResultCondition__Fields {
    struct Condition_1__Fields _;
    PurchaseResult__Enum PurchaseInterruptResult;

    bool Inverse;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkillUpgradeShopPurchaseResultCondition__Fields_FWDDECL)
#include <Modloader/app/structs/SkillUpgradeShopPurchaseResultCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillUpgradeShopPurchaseResultCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
