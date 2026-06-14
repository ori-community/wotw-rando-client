#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpWebResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpWebResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebResponse_DEFINED)
#include <Modloader/app/structs/HttpWebResponse__Fields.h>
#if defined(IL2CPP_STRUCT_HttpWebResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpWebResponse_DEFINED
struct HttpWebResponse__Class;
struct HttpWebResponse {
    struct HttpWebResponse__Class* klass;
    MonitorData* monitor;
    struct HttpWebResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpWebResponse_FWDDECL)
#define IL2CPP_STRUCT_HttpWebResponse_FWDDECL
#include <Modloader/app/structs/HttpWebResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpWebResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebResponse_DEFINED) && !defined(IL2CPP_STRUCT_HttpWebResponse_FWDDECL)
#include <Modloader/app/structs/HttpWebResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpWebResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
