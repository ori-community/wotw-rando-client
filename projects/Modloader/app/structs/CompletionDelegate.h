#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompletionDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompletionDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompletionDelegate_DEFINED)
#include <Modloader/app/structs/CompletionDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_CompletionDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_CompletionDelegate_DEFINED
struct CompletionDelegate__Class;
struct CompletionDelegate {
    struct CompletionDelegate__Class* klass;
    MonitorData* monitor;
    struct CompletionDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompletionDelegate_FWDDECL)
#define IL2CPP_STRUCT_CompletionDelegate_FWDDECL
#include <Modloader/app/structs/CompletionDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_CompletionDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompletionDelegate_DEFINED) && !defined(IL2CPP_STRUCT_CompletionDelegate_FWDDECL)
#include <Modloader/app/structs/CompletionDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompletionDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
