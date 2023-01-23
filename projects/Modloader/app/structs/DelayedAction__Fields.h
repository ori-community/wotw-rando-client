#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedAction__Fields_DEFINED
struct DelayedAction_Action;
struct Func_1_Boolean_;
struct Component_1;
struct __declspec(align(8)) DelayedAction__Fields {
    int32_t FrameDelay;
    float m_remainingDelay;
    bool m_isCounting;
    struct DelayedAction_Action* m_actionToPerform;
    struct Func_1_Boolean_* m_condition;
    struct Component_1* m_owner;
};
#endif
#if !defined(IL2CPP_STRUCT_DelayedAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_DelayedAction__Fields_FWDDECL
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/DelayedAction_Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_DelayedAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelayedAction__Fields_FWDDECL)
#include <Modloader/app/structs/DelayedAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
