#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpContentHeaders_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpContentHeaders_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContentHeaders_DEFINED)
#include <Modloader/app/structs/HttpContentHeaders__Fields.h>
#if defined(IL2CPP_STRUCT_HttpContentHeaders__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpContentHeaders_DEFINED
struct HttpContentHeaders__Class;
struct HttpContentHeaders {
    struct HttpContentHeaders__Class* klass;
    MonitorData* monitor;
    struct HttpContentHeaders__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpContentHeaders_FWDDECL)
#define IL2CPP_STRUCT_HttpContentHeaders_FWDDECL
#include <Modloader/app/structs/HttpContentHeaders__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpContentHeaders_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContentHeaders_DEFINED) && !defined(IL2CPP_STRUCT_HttpContentHeaders_FWDDECL)
#include <Modloader/app/structs/HttpContentHeaders.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpContentHeaders.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
