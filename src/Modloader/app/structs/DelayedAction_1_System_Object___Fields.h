#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_DEFINED
struct Component_1;
struct Action_1_Object_;
struct Func_1_Boolean_;
struct Object;
struct __declspec(align(8)) DelayedAction_1_System_Object___Fields {
    int32_t FrameDelay;
    float m_remainingDelay;
    bool m_isCounting;
    struct Component_1* m_owner;
    struct Action_1_Object_* m_actionToPerform;
    struct Func_1_Boolean_* m_condition;
    struct Object* m_param;
};
#endif
#if !defined(IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelayedAction_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/DelayedAction_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedAction_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
