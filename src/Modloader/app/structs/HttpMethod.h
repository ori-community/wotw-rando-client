#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpMethod_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpMethod_DEFINED)
#include <Modloader/app/structs/HttpMethod__Fields.h>
#if defined(IL2CPP_STRUCT_HttpMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpMethod_DEFINED
struct HttpMethod__Class;
struct HttpMethod {
    struct HttpMethod__Class* klass;
    MonitorData* monitor;
    struct HttpMethod__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpMethod_FWDDECL)
#define IL2CPP_STRUCT_HttpMethod_FWDDECL
#include <Modloader/app/structs/HttpMethod__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpMethod_DEFINED) && !defined(IL2CPP_STRUCT_HttpMethod_FWDDECL)
#include <Modloader/app/structs/HttpMethod.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpMethod.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
