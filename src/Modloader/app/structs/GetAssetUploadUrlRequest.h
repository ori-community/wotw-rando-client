#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAssetUploadUrlRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAssetUploadUrlRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAssetUploadUrlRequest_DEFINED)
#include <Modloader/app/structs/GetAssetUploadUrlRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetAssetUploadUrlRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetAssetUploadUrlRequest_DEFINED
struct GetAssetUploadUrlRequest__Class;
struct GetAssetUploadUrlRequest {
    struct GetAssetUploadUrlRequest__Class* klass;
    MonitorData* monitor;
    struct GetAssetUploadUrlRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAssetUploadUrlRequest_FWDDECL)
#define IL2CPP_STRUCT_GetAssetUploadUrlRequest_FWDDECL
#include <Modloader/app/structs/GetAssetUploadUrlRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetAssetUploadUrlRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAssetUploadUrlRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetAssetUploadUrlRequest_FWDDECL)
#include <Modloader/app/structs/GetAssetUploadUrlRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAssetUploadUrlRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
