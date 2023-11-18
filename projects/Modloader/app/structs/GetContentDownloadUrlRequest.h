#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetContentDownloadUrlRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetContentDownloadUrlRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest_DEFINED)
#include <Modloader/app/structs/GetContentDownloadUrlRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetContentDownloadUrlRequest_DEFINED
struct GetContentDownloadUrlRequest__Class;
struct GetContentDownloadUrlRequest {
    struct GetContentDownloadUrlRequest__Class* klass;
    MonitorData* monitor;
    struct GetContentDownloadUrlRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest_FWDDECL)
#define IL2CPP_STRUCT_GetContentDownloadUrlRequest_FWDDECL
#include <Modloader/app/structs/GetContentDownloadUrlRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetContentDownloadUrlRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetContentDownloadUrlRequest_FWDDECL)
#include <Modloader/app/structs/GetContentDownloadUrlRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetContentDownloadUrlRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
