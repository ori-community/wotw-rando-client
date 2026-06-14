#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionUberState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionUberState__Fields_DEFINED)
#include <Modloader/app/structs/ConditionUberState_ConditionsCheckMode__Enum.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/UberIDOwnerSO__Fields.h>
#if defined(IL2CPP_STRUCT_UberIDOwnerSO__Fields_DEFINED) && defined(IL2CPP_STRUCT_ConditionUberState_ConditionsCheckMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_ConditionUberState__Fields_DEFINED
struct UberStateGroup;
struct UberID;
struct List_1_UberStateCondition_;
struct NamedValues_1_System_Boolean_;
struct ConditionUberState__Fields {
    struct UberIDOwnerSO__Fields _;
    struct UberStateGroup* Group;
    struct UberID* m_cachedGroupID;
    bool m_isGroupIDCached;
    ConditionUberState_ConditionsCheckMode__Enum CheckMode;

    struct List_1_UberStateCondition_* Descriptors;
    struct NamedValues_1_System_Boolean_* NamedValues;
    bool _DefaultBooleanValue_k__BackingField;
    struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionUberState__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConditionUberState__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberStateCondition_.h>
#include <Modloader/app/structs/NamedValues_1_System_Boolean_.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberStateGroup.h>
#endif
#undef IL2CPP_STRUCT_ConditionUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionUberState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConditionUberState__Fields_FWDDECL)
#include <Modloader/app/structs/ConditionUberState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionUberState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
