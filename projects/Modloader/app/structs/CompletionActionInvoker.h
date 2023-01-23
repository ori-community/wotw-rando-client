#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompletionActionInvoker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompletionActionInvoker_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompletionActionInvoker_DEFINED)
#include <Modloader/app/structs/CompletionActionInvoker__Fields.h>
#if defined(IL2CPP_STRUCT_CompletionActionInvoker__Fields_DEFINED)
#define IL2CPP_STRUCT_CompletionActionInvoker_DEFINED
struct CompletionActionInvoker__Class;
struct CompletionActionInvoker {
    struct CompletionActionInvoker__Class* klass;
    MonitorData* monitor;
    struct CompletionActionInvoker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompletionActionInvoker_FWDDECL)
#define IL2CPP_STRUCT_CompletionActionInvoker_FWDDECL
#include <Modloader/app/structs/CompletionActionInvoker__Class.h>
#endif
#undef IL2CPP_STRUCT_CompletionActionInvoker_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompletionActionInvoker_DEFINED) && !defined(IL2CPP_STRUCT_CompletionActionInvoker_FWDDECL)
#include <Modloader/app/structs/CompletionActionInvoker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompletionActionInvoker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
