#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnection_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnection_DEFINED)
#include <Modloader/app/structs/WebConnection__Fields.h>
#if defined(IL2CPP_STRUCT_WebConnection__Fields_DEFINED)
#define IL2CPP_STRUCT_WebConnection_DEFINED
struct WebConnection__Class;
struct WebConnection {
    struct WebConnection__Class* klass;
    MonitorData* monitor;
    struct WebConnection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnection_FWDDECL)
#define IL2CPP_STRUCT_WebConnection_FWDDECL
#include <Modloader/app/structs/WebConnection__Class.h>
#endif
#undef IL2CPP_STRUCT_WebConnection_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnection_DEFINED) && !defined(IL2CPP_STRUCT_WebConnection_FWDDECL)
#include <Modloader/app/structs/WebConnection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
