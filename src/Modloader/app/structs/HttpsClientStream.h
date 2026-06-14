#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpsClientStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpsClientStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpsClientStream_DEFINED)
#include <Modloader/app/structs/HttpsClientStream__Fields.h>
#if defined(IL2CPP_STRUCT_HttpsClientStream__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpsClientStream_DEFINED
struct HttpsClientStream__Class;
struct HttpsClientStream {
    struct HttpsClientStream__Class* klass;
    MonitorData* monitor;
    struct HttpsClientStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpsClientStream_FWDDECL)
#define IL2CPP_STRUCT_HttpsClientStream_FWDDECL
#include <Modloader/app/structs/HttpsClientStream__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpsClientStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpsClientStream_DEFINED) && !defined(IL2CPP_STRUCT_HttpsClientStream_FWDDECL)
#include <Modloader/app/structs/HttpsClientStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpsClientStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
