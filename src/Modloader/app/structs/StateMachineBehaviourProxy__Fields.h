#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_DEFINED
struct GameObject;
struct Action_1_Int32_;
struct Action_1_String_;
struct StateMachineBehaviourProxy_IReceiver;
struct StateMachineBehaviourProxy__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* ReceiverObject;
    struct Action_1_Int32_* OnIntEventAction;
    struct Action_1_String_* OnStringEventAction;
    struct StateMachineBehaviourProxy_IReceiver* m_Receiver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/StateMachineBehaviourProxy_IReceiver.h>
#endif
#undef IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateMachineBehaviourProxy__Fields_FWDDECL)
#include <Modloader/app/structs/StateMachineBehaviourProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMachineBehaviourProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
