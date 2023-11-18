#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpConnection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpConnection_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpConnection_DEFINED)
#include <Modloader/app/structs/HttpConnection__Fields.h>
#if defined(IL2CPP_STRUCT_HttpConnection__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpConnection_DEFINED
struct HttpConnection__Class;
struct HttpConnection {
    struct HttpConnection__Class* klass;
    MonitorData* monitor;
    struct HttpConnection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpConnection_FWDDECL)
#define IL2CPP_STRUCT_HttpConnection_FWDDECL
#include <Modloader/app/structs/HttpConnection__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpConnection_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpConnection_DEFINED) && !defined(IL2CPP_STRUCT_HttpConnection_FWDDECL)
#include <Modloader/app/structs/HttpConnection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpConnection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
