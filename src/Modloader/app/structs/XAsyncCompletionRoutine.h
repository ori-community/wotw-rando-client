#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAsyncCompletionRoutine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAsyncCompletionRoutine_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAsyncCompletionRoutine_DEFINED)
#include <Modloader/app/structs/XAsyncCompletionRoutine__Fields.h>
#if defined(IL2CPP_STRUCT_XAsyncCompletionRoutine__Fields_DEFINED)
#define IL2CPP_STRUCT_XAsyncCompletionRoutine_DEFINED
struct XAsyncCompletionRoutine__Class;
struct XAsyncCompletionRoutine {
    struct XAsyncCompletionRoutine__Class* klass;
    MonitorData* monitor;
    struct XAsyncCompletionRoutine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAsyncCompletionRoutine_FWDDECL)
#define IL2CPP_STRUCT_XAsyncCompletionRoutine_FWDDECL
#include <Modloader/app/structs/XAsyncCompletionRoutine__Class.h>
#endif
#undef IL2CPP_STRUCT_XAsyncCompletionRoutine_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAsyncCompletionRoutine_DEFINED) && !defined(IL2CPP_STRUCT_XAsyncCompletionRoutine_FWDDECL)
#include <Modloader/app/structs/XAsyncCompletionRoutine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAsyncCompletionRoutine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
