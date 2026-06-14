#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_DEFINED
struct Component_1;
struct Action_1_Single_;
struct Func_1_Boolean_;
struct __declspec(align(8)) DelayedAction_1_System_Single___Fields {
    int32_t FrameDelay;
    float m_remainingDelay;
    bool m_isCounting;
    struct Component_1* m_owner;
    struct Action_1_Single_* m_actionToPerform;
    struct Func_1_Boolean_* m_condition;
    float m_param;
};
#endif
#if !defined(IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_FWDDECL)
#define IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelayedAction_1_System_Single___Fields_FWDDECL)
#include <Modloader/app/structs/DelayedAction_1_System_Single___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedAction_1_System_Single___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
