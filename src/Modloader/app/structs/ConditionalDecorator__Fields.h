#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalDecorator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalDecorator__Fields_DEFINED)
#include <Modloader/app/structs/ConditionalDecorator_ConditionsCheckMode__Enum.h>
#include <Modloader/app/structs/DecoratorNode__Fields.h>
#if defined(IL2CPP_STRUCT_DecoratorNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_ConditionalDecorator_ConditionsCheckMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ConditionalDecorator__Fields_DEFINED
struct Action_1_Moon_BehaviourSystem_Condition_;
struct Action;
struct Condition__Array;
struct List_1_Moon_BehaviourSystem_Condition_;
struct ConditionalDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct Action_1_Moon_BehaviourSystem_Condition_* OnConditionAdded;
    struct Action* OnConditionRemoved;
    bool m_isDynamic;
    ConditionalDecorator_ConditionsCheckMode__Enum m_checkMode;

    struct Condition__Array* m_conditions;
    struct List_1_Moon_BehaviourSystem_Condition_* m_conditionsList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalDecorator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConditionalDecorator__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_Condition_.h>
#include <Modloader/app/structs/Condition__Array.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_Condition_.h>
#endif
#undef IL2CPP_STRUCT_ConditionalDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalDecorator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalDecorator__Fields_FWDDECL)
#include <Modloader/app/structs/ConditionalDecorator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalDecorator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
