#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_IOAsyncResult__Fields_DEFINED
struct AsyncCallback;
struct Object;
struct ManualResetEvent;
struct __declspec(align(8)) IOAsyncResult__Fields {
    struct AsyncCallback* async_callback;
    struct Object* async_state;
    struct ManualResetEvent* wait_handle;
    bool completed_synchronously;
    bool completed;
};
#endif
#if !defined(IL2CPP_STRUCT_IOAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_IOAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_IOAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IOAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/IOAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
