#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_DEFINED)
#include <Modloader/app/structs/LazyAsyncResult_ThreadContext__Fields.h>
#if defined(IL2CPP_STRUCT_LazyAsyncResult_ThreadContext__Fields_DEFINED)
#define IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_DEFINED
struct LazyAsyncResult_ThreadContext__Class;
struct LazyAsyncResult_ThreadContext {
    struct LazyAsyncResult_ThreadContext__Class* klass;
    MonitorData* monitor;
    struct LazyAsyncResult_ThreadContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_FWDDECL)
#define IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_FWDDECL
#include <Modloader/app/structs/LazyAsyncResult_ThreadContext__Class.h>
#endif
#undef IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_DEFINED) && !defined(IL2CPP_STRUCT_LazyAsyncResult_ThreadContext_FWDDECL)
#include <Modloader/app/structs/LazyAsyncResult_ThreadContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LazyAsyncResult_ThreadContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
