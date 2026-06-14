#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebResponse_DEFINED)
#include <Modloader/app/structs/WebResponse__Fields.h>
#if defined(IL2CPP_STRUCT_WebResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_WebResponse_DEFINED
struct WebResponse__Class;
struct WebResponse {
    struct WebResponse__Class* klass;
    MonitorData* monitor;
    struct WebResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebResponse_FWDDECL)
#define IL2CPP_STRUCT_WebResponse_FWDDECL
#include <Modloader/app/structs/WebResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_WebResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebResponse_DEFINED) && !defined(IL2CPP_STRUCT_WebResponse_FWDDECL)
#include <Modloader/app/structs/WebResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
