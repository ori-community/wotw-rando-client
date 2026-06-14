#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpsClientStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpsClientStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpsClientStream__Fields_DEFINED)
#include <Modloader/app/structs/SslClientStream__Fields.h>
#if defined(IL2CPP_STRUCT_SslClientStream__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpsClientStream__Fields_DEFINED
struct HttpWebRequest;
struct HttpsClientStream__Fields {
    struct SslClientStream__Fields _;
    struct HttpWebRequest* _request;
    int32_t _status;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpsClientStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpsClientStream__Fields_FWDDECL
#include <Modloader/app/structs/HttpWebRequest.h>
#endif
#undef IL2CPP_STRUCT_HttpsClientStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpsClientStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpsClientStream__Fields_FWDDECL)
#include <Modloader/app/structs/HttpsClientStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpsClientStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
