#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_FtpAsyncResult__Fields_DEFINED
struct FtpWebResponse;
struct ManualResetEvent;
struct Exception;
struct AsyncCallback;
struct Stream;
struct Object;
struct __declspec(align(8)) FtpAsyncResult__Fields {
    struct FtpWebResponse* response;
    struct ManualResetEvent* waitHandle;
    struct Exception* exception;
    struct AsyncCallback* callback;
    struct Stream* stream;
    struct Object* state;
    bool completed;
    bool synch;
    struct Object* locker;
};
#endif
#if !defined(IL2CPP_STRUCT_FtpAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_FtpAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FtpWebResponse.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_FtpAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FtpAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/FtpAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
