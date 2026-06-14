#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageTypeCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageTypeCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/LogicUtility_ComparisonType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_LogicUtility_ComparisonType__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageTypeCondition__Fields_DEFINED
struct DamageType__Enum__Array;
struct DamageTypeCondition__Fields {
    struct Condition_1__Fields _;
    bool ValidateDamageType;
    struct DamageType__Enum__Array* Allowed;
    bool ValidateDamageDirection;
    struct Vector2 DamageDirection;
    float DamageDirectionWithinDegrees;
    bool ValidateDamageAmount;
    LogicUtility_ComparisonType__Enum DamageAmountComparison;

    float DamageAmount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageTypeCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageTypeCondition__Fields_FWDDECL
#include <Modloader/app/structs/DamageType__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_DamageTypeCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageTypeCondition__Fields_FWDDECL)
#include <Modloader/app/structs/DamageTypeCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageTypeCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
