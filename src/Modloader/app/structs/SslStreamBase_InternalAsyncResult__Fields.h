#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_DEFINED
struct Object;
struct AsyncCallback;
struct Exception;
struct ManualResetEvent;
struct Byte__Array;
struct __declspec(align(8)) SslStreamBase_InternalAsyncResult__Fields {
    struct Object* locker;
    struct AsyncCallback* _userCallback;
    struct Object* _userState;
    struct Exception* _asyncException;
    struct ManualResetEvent* handle;
    bool completed;
    int32_t _bytesRead;
    bool _fromWrite;
    bool _proceedAfterHandshake;
    struct Byte__Array* _buffer;
    int32_t _offset;
    int32_t _count;
};
#endif
#if !defined(IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SslStreamBase_InternalAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/SslStreamBase_InternalAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslStreamBase_InternalAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
