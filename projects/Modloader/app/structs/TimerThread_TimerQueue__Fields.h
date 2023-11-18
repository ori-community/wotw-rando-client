#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_DEFINED)
#include <Modloader/app/structs/TimerThread_Queue__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_Queue__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_DEFINED
struct TimerThread_TimerNode;
struct TimerThread_TimerQueue__Fields {
    struct TimerThread_Queue__Fields _;
    void* m_ThisHandle;
    struct TimerThread_TimerNode* m_Timers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_FWDDECL
#include <Modloader/app/structs/TimerThread_TimerNode.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_FWDDECL)
#include <Modloader/app/structs/TimerThread_TimerQueue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_TimerQueue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
