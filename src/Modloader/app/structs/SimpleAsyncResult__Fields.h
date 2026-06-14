#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAsyncResult__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_SimpleAsyncResult__Fields_DEFINED
struct ManualResetEvent;
struct SimpleAsyncCallback;
struct Object;
struct Exception;
struct __declspec(align(8)) SimpleAsyncResult__Fields {
    struct ManualResetEvent* handle;
    bool synch;
    bool isCompleted;
    struct SimpleAsyncCallback* cb;
    struct Object* state;
    bool callbackDone;
    struct Exception* exc;
    struct Object* locker;
    struct Nullable_1_Boolean_ user_read_synch;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SimpleAsyncCallback.h>
#endif
#undef IL2CPP_STRUCT_SimpleAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
