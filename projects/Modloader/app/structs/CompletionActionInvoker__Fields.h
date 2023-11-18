#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompletionActionInvoker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompletionActionInvoker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompletionActionInvoker__Fields_DEFINED)
#define IL2CPP_STRUCT_CompletionActionInvoker__Fields_DEFINED
struct ITaskCompletionAction;
struct Task;
struct __declspec(align(8)) CompletionActionInvoker__Fields {
    struct ITaskCompletionAction* m_action;
    struct Task* m_completingTask;
};
#endif
#if !defined(IL2CPP_STRUCT_CompletionActionInvoker__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompletionActionInvoker__Fields_FWDDECL
#include <Modloader/app/structs/ITaskCompletionAction.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_CompletionActionInvoker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompletionActionInvoker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompletionActionInvoker__Fields_FWDDECL)
#include <Modloader/app/structs/CompletionActionInvoker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompletionActionInvoker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
