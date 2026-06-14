#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AggregateCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AggregateCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateCondition__Fields_DEFINED)
#include <Modloader/app/structs/AggregateCondition_Mode__Enum.h>
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_AggregateCondition_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_AggregateCondition__Fields_DEFINED
struct Condition_1__Array;
struct AggregateCondition__Fields {
    struct Condition_1__Fields _;
    AggregateCondition_Mode__Enum EvaluationMode;

    struct Condition_1__Array* Conditions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AggregateCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_AggregateCondition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1__Array.h>
#endif
#undef IL2CPP_STRUCT_AggregateCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AggregateCondition__Fields_FWDDECL)
#include <Modloader/app/structs/AggregateCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AggregateCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
