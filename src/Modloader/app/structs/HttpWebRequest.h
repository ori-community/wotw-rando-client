#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpWebRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebRequest_DEFINED)
#include <Modloader/app/structs/HttpWebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_HttpWebRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpWebRequest_DEFINED
struct HttpWebRequest__Class;
struct HttpWebRequest {
    struct HttpWebRequest__Class* klass;
    MonitorData* monitor;
    struct HttpWebRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpWebRequest_FWDDECL)
#define IL2CPP_STRUCT_HttpWebRequest_FWDDECL
#include <Modloader/app/structs/HttpWebRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebRequest_DEFINED) && !defined(IL2CPP_STRUCT_HttpWebRequest_FWDDECL)
#include <Modloader/app/structs/HttpWebRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpWebRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
