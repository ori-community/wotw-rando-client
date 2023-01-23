#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageResolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageResolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResolver__Fields_DEFINED)
#include <Modloader/app/structs/DamageResolver_BaseRuleType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageResolver_BaseRuleType__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageResolver__Fields_DEFINED
struct List_1_Moon_DamageResolver_Rule_;
struct Dictionary_2_DamageType_Moon_DamageResolver_Rule_;
struct DamageResolver__Fields {
    struct MonoBehaviour__Fields _;
    DamageResolver_BaseRuleType__Enum BaseRule;

    float BlockAllMultiplier;
    struct List_1_Moon_DamageResolver_Rule_* DamageRules;
    struct Dictionary_2_DamageType_Moon_DamageResolver_Rule_* m_ruleOverrides;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageResolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageResolver__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_DamageType_Moon_DamageResolver_Rule_.h>
#include <Modloader/app/structs/List_1_Moon_DamageResolver_Rule_.h>
#endif
#undef IL2CPP_STRUCT_DamageResolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageResolver__Fields_FWDDECL)
#include <Modloader/app/structs/DamageResolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageResolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
