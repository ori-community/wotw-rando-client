#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpStreamAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpStreamAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpStreamAsyncResult_DEFINED)
#include <Modloader/app/structs/HttpStreamAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_HttpStreamAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpStreamAsyncResult_DEFINED
struct HttpStreamAsyncResult__Class;
struct HttpStreamAsyncResult {
    struct HttpStreamAsyncResult__Class* klass;
    MonitorData* monitor;
    struct HttpStreamAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpStreamAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_HttpStreamAsyncResult_FWDDECL
#include <Modloader/app/structs/HttpStreamAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpStreamAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpStreamAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_HttpStreamAsyncResult_FWDDECL)
#include <Modloader/app/structs/HttpStreamAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpStreamAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
