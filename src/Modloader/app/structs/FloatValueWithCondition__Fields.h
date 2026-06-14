#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatValueWithCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatValueWithCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatValueWithCondition__Fields_DEFINED)
#include <Modloader/app/structs/ValueWithCondition_1_System_Single___Fields.h>
#if defined(IL2CPP_STRUCT_ValueWithCondition_1_System_Single___Fields_DEFINED)
#define IL2CPP_STRUCT_FloatValueWithCondition__Fields_DEFINED
struct FloatConditionAndValue__Array;
struct FloatValueWithCondition__Fields {
    struct ValueWithCondition_1_System_Single___Fields _;
    struct FloatConditionAndValue__Array* ConditionsAndValues;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatValueWithCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatValueWithCondition__Fields_FWDDECL
#include <Modloader/app/structs/FloatConditionAndValue__Array.h>
#endif
#undef IL2CPP_STRUCT_FloatValueWithCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatValueWithCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatValueWithCondition__Fields_FWDDECL)
#include <Modloader/app/structs/FloatValueWithCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatValueWithCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
