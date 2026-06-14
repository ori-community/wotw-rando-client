#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebAsyncResult_DEFINED)
#include <Modloader/app/structs/WebAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_WebAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_WebAsyncResult_DEFINED
struct WebAsyncResult__Class;
struct WebAsyncResult {
    struct WebAsyncResult__Class* klass;
    MonitorData* monitor;
    struct WebAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_WebAsyncResult_FWDDECL
#include <Modloader/app/structs/WebAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_WebAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_WebAsyncResult_FWDDECL)
#include <Modloader/app/structs/WebAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
