#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ListenerAsyncResult__Fields_DEFINED
struct ManualResetEvent;
struct AsyncCallback;
struct Object;
struct Exception;
struct HttpListenerContext;
struct ListenerAsyncResult;
struct __declspec(align(8)) ListenerAsyncResult__Fields {
    struct ManualResetEvent* handle;
    bool synch;
    bool completed;
    struct AsyncCallback* cb;
    struct Object* state;
    struct Exception* exception;
    struct HttpListenerContext* context;
    struct Object* locker;
    struct ListenerAsyncResult* forward;
    bool EndCalled;
    bool InGet;
};
#endif
#if !defined(IL2CPP_STRUCT_ListenerAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListenerAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HttpListenerContext.h>
#include <Modloader/app/structs/ListenerAsyncResult.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ListenerAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListenerAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/ListenerAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
