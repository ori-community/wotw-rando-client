#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpRequestHeaders_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpRequestHeaders_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestHeaders_DEFINED)
#include <Modloader/app/structs/HttpRequestHeaders__Fields.h>
#if defined(IL2CPP_STRUCT_HttpRequestHeaders__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpRequestHeaders_DEFINED
struct HttpRequestHeaders__Class;
struct HttpRequestHeaders {
    struct HttpRequestHeaders__Class* klass;
    MonitorData* monitor;
    struct HttpRequestHeaders__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpRequestHeaders_FWDDECL)
#define IL2CPP_STRUCT_HttpRequestHeaders_FWDDECL
#include <Modloader/app/structs/HttpRequestHeaders__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpRequestHeaders_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestHeaders_DEFINED) && !defined(IL2CPP_STRUCT_HttpRequestHeaders_FWDDECL)
#include <Modloader/app/structs/HttpRequestHeaders.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpRequestHeaders.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
