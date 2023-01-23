#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_DEFINED
struct ContextCallback;
struct CancellationCallbackInfo__StaticFields {
    struct ContextCallback* s_executionContextCallback;
};
#endif
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_FWDDECL
#include <Modloader/app/structs/ContextCallback.h>
#endif
#undef IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CancellationCallbackInfo__StaticFields_FWDDECL)
#include <Modloader/app/structs/CancellationCallbackInfo__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellationCallbackInfo__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
