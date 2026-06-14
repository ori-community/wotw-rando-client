#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/HealthCondition_ConditionOp__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_HealthCondition_ConditionOp__Enum_DEFINED)
#define IL2CPP_STRUCT_HealthCondition__Fields_DEFINED
struct Vitals;
struct MoonReference_1_Vitals_;
struct HealthCondition__Fields {
    struct Condition_1__Fields _;
    struct Vitals* Vitals;
    struct MoonReference_1_Vitals_* VitalsReference;
    HealthCondition_ConditionOp__Enum Operation;

    float Value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_HealthCondition__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Vitals_.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_HealthCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HealthCondition__Fields_FWDDECL)
#include <Modloader/app/structs/HealthCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
