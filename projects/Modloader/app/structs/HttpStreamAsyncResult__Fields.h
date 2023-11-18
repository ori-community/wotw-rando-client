#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_DEFINED
struct Object;
struct ManualResetEvent;
struct Byte__Array;
struct AsyncCallback;
struct Exception;
struct __declspec(align(8)) HttpStreamAsyncResult__Fields {
    struct Object* locker;
    struct ManualResetEvent* handle;
    bool completed;
    struct Byte__Array* Buffer;
    int32_t Offset;
    int32_t Count;
    struct AsyncCallback* Callback;
    struct Object* State;
    int32_t SynchRead;
    struct Exception* Error;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/HttpStreamAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpStreamAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
