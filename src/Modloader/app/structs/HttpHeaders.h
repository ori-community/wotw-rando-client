#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpHeaders_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpHeaders_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaders_DEFINED)
#include <Modloader/app/structs/HttpHeaders__Fields.h>
#if defined(IL2CPP_STRUCT_HttpHeaders__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpHeaders_DEFINED
struct HttpHeaders__Class;
struct HttpHeaders {
    struct HttpHeaders__Class* klass;
    MonitorData* monitor;
    struct HttpHeaders__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpHeaders_FWDDECL)
#define IL2CPP_STRUCT_HttpHeaders_FWDDECL
#include <Modloader/app/structs/HttpHeaders__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpHeaders_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaders_DEFINED) && !defined(IL2CPP_STRUCT_HttpHeaders_FWDDECL)
#include <Modloader/app/structs/HttpHeaders.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpHeaders.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
