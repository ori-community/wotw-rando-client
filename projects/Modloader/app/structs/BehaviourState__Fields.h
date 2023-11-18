#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourState__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourState__Fields_DEFINED
struct Action;
struct Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_;
struct String;
struct __declspec(align(8)) BehaviourState__Fields {
    struct Action* m_onBegin;
    struct Action* m_onInterrupt;
    struct Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* m_onUpdate;
    struct String* _Name_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_BehaviourState__Fields_FWDDECL)
#define IL2CPP_STRUCT_BehaviourState__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BehaviourState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourState__Fields_FWDDECL)
#include <Modloader/app/structs/BehaviourState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
