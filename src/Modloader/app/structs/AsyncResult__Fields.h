#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncResult__Fields_DEFINED
struct Object;
struct WaitHandle;
struct ExecutionContext;
struct MonoMethodMessage;
struct IMessageCtrl;
struct IMessage;
struct WaitCallback;
struct __declspec(align(8)) AsyncResult__Fields {
    struct Object* async_state;
    struct WaitHandle* handle;
    struct Object* async_delegate;
    void* data;
    struct Object* object_data;
    bool sync_completed;
    bool completed;
    bool endinvoke_called;
    struct Object* async_callback;
    struct ExecutionContext* current;
    struct ExecutionContext* original;
    int64_t add_time;
    struct MonoMethodMessage* call_message;
    struct IMessageCtrl* message_ctrl;
    struct IMessage* reply_message;
    struct WaitCallback* orig_cb;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/MonoMethodMessage.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WaitCallback.h>
#include <Modloader/app/structs/WaitHandle.h>
#endif
#undef IL2CPP_STRUCT_AsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
