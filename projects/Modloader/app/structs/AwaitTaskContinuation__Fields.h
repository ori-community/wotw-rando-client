#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AwaitTaskContinuation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AwaitTaskContinuation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation__Fields_DEFINED)
#define IL2CPP_STRUCT_AwaitTaskContinuation__Fields_DEFINED
struct ExecutionContext;
struct Action;
struct __declspec(align(8)) AwaitTaskContinuation__Fields {
    struct ExecutionContext* m_capturedContext;
    struct Action* m_action;
};
#endif
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation__Fields_FWDDECL)
#define IL2CPP_STRUCT_AwaitTaskContinuation__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ExecutionContext.h>
#endif
#undef IL2CPP_STRUCT_AwaitTaskContinuation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AwaitTaskContinuation__Fields_FWDDECL)
#include <Modloader/app/structs/AwaitTaskContinuation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AwaitTaskContinuation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
