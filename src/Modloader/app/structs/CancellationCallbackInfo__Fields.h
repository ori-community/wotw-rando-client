#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellationCallbackInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellationCallbackInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CancellationCallbackInfo__Fields_DEFINED
struct Action_1_Object_;
struct Object;
struct SynchronizationContext;
struct ExecutionContext;
struct CancellationTokenSource;
struct __declspec(align(8)) CancellationCallbackInfo__Fields {
    struct Action_1_Object_* Callback;
    struct Object* StateForCallback;
    struct SynchronizationContext* TargetSyncContext;
    struct ExecutionContext* TargetExecutionContext;
    struct CancellationTokenSource* CancellationTokenSource;
};
#endif
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_CancellationCallbackInfo__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SynchronizationContext.h>
#endif
#undef IL2CPP_STRUCT_CancellationCallbackInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CancellationCallbackInfo__Fields_FWDDECL)
#include <Modloader/app/structs/CancellationCallbackInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellationCallbackInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
