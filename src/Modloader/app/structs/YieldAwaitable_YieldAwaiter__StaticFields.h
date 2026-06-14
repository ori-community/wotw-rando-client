#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_DEFINED
struct WaitCallback;
struct SendOrPostCallback;
struct YieldAwaitable_YieldAwaiter__StaticFields {
    struct WaitCallback* s_waitCallbackRunAction;
    struct SendOrPostCallback* s_sendOrPostCallbackRunAction;
};
#endif
#if !defined(IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_FWDDECL
#include <Modloader/app/structs/SendOrPostCallback.h>
#include <Modloader/app/structs/WaitCallback.h>
#endif
#undef IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_YieldAwaitable_YieldAwaiter__StaticFields_FWDDECL)
#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
