#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectionPool__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectionPool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool__Fields_DEFINED)
#include <Modloader/app/structs/ConnectionPool_State__Enum.h>
#if defined(IL2CPP_STRUCT_ConnectionPool_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ConnectionPool__Fields_DEFINED
struct TimerThread_Queue;
struct InterlockedStack;
struct WaitHandle__Array;
struct Exception;
struct TimerThread_Timer;
struct ArrayList;
struct Queue;
struct Thread;
struct ServicePoint;
struct CreateConnectionDelegate;
struct __declspec(align(8)) ConnectionPool__Fields {
    struct TimerThread_Queue* m_CleanupQueue;
    ConnectionPool_State__Enum m_State;

    struct InterlockedStack* m_StackOld;
    struct InterlockedStack* m_StackNew;
    int32_t m_WaitCount;
    struct WaitHandle__Array* m_WaitHandles;
    struct Exception* m_ResError;
    bool m_ErrorOccured;
    struct TimerThread_Timer* m_ErrorTimer;
    struct ArrayList* m_ObjectList;
    int32_t m_TotalObjects;
    struct Queue* m_QueuedRequests;
    struct Thread* m_AsyncThread;
    int32_t m_MaxPoolSize;
    int32_t m_MinPoolSize;
    struct ServicePoint* m_ServicePoint;
    struct CreateConnectionDelegate* m_CreateConnectionCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConnectionPool__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConnectionPool__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CreateConnectionDelegate.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/InterlockedStack.h>
#include <Modloader/app/structs/Queue.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/TimerThread_Queue.h>
#include <Modloader/app/structs/TimerThread_Timer.h>
#include <Modloader/app/structs/WaitHandle__Array.h>
#endif
#undef IL2CPP_STRUCT_ConnectionPool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConnectionPool__Fields_FWDDECL)
#include <Modloader/app/structs/ConnectionPool__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectionPool__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
