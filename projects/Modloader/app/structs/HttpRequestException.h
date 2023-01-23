#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpRequestException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpRequestException_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestException_DEFINED)
#include <Modloader/app/structs/HttpRequestException__Fields.h>
#if defined(IL2CPP_STRUCT_HttpRequestException__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpRequestException_DEFINED
struct HttpRequestException__Class;
struct HttpRequestException {
    struct HttpRequestException__Class* klass;
    MonitorData* monitor;
    struct HttpRequestException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpRequestException_FWDDECL)
#define IL2CPP_STRUCT_HttpRequestException_FWDDECL
#include <Modloader/app/structs/HttpRequestException__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpRequestException_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestException_DEFINED) && !defined(IL2CPP_STRUCT_HttpRequestException_FWDDECL)
#include <Modloader/app/structs/HttpRequestException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpRequestException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
