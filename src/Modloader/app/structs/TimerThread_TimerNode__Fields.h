#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_TimerNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_TimerNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode__Fields_DEFINED)
#include <Modloader/app/structs/TimerThread_TimerNode_TimerState__Enum.h>
#include <Modloader/app/structs/TimerThread_Timer__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_Timer__Fields_DEFINED) && defined(IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_DEFINED)
#define IL2CPP_STRUCT_TimerThread_TimerNode__Fields_DEFINED
struct TimerThread_Callback;
struct Object;
struct TimerThread_TimerNode;
struct TimerThread_TimerNode__Fields {
    struct TimerThread_Timer__Fields _;
    TimerThread_TimerNode_TimerState__Enum m_TimerState;

    struct TimerThread_Callback* m_Callback;
    struct Object* m_Context;
    struct Object* m_QueueLock;
    struct TimerThread_TimerNode* next;
    struct TimerThread_TimerNode* prev;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_TimerNode__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimerThread_Callback.h>
#include <Modloader/app/structs/TimerThread_TimerNode.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_TimerNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_TimerNode__Fields_FWDDECL)
#include <Modloader/app/structs/TimerThread_TimerNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_TimerNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
