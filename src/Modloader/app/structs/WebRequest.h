#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequest_DEFINED)
#include <Modloader/app/structs/WebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WebRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_WebRequest_DEFINED
struct WebRequest__Class;
struct WebRequest {
    struct WebRequest__Class* klass;
    MonitorData* monitor;
    struct WebRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebRequest_FWDDECL)
#define IL2CPP_STRUCT_WebRequest_FWDDECL
#include <Modloader/app/structs/WebRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_WebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequest_DEFINED) && !defined(IL2CPP_STRUCT_WebRequest_FWDDECL)
#include <Modloader/app/structs/WebRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
