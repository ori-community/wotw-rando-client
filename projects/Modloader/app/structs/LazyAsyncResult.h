#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LazyAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LazyAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LazyAsyncResult_DEFINED)
#include <Modloader/app/structs/LazyAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_LazyAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LazyAsyncResult_DEFINED
struct LazyAsyncResult__Class;
struct LazyAsyncResult {
    struct LazyAsyncResult__Class* klass;
    MonitorData* monitor;
    struct LazyAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LazyAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_LazyAsyncResult_FWDDECL
#include <Modloader/app/structs/LazyAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_LazyAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LazyAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_LazyAsyncResult_FWDDECL)
#include <Modloader/app/structs/LazyAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LazyAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
