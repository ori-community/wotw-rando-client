#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAssetUploadUrlResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAssetUploadUrlResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAssetUploadUrlResponse_DEFINED)
#include <Modloader/app/structs/GetAssetUploadUrlResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetAssetUploadUrlResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetAssetUploadUrlResponse_DEFINED
struct GetAssetUploadUrlResponse__Class;
struct GetAssetUploadUrlResponse {
    struct GetAssetUploadUrlResponse__Class* klass;
    MonitorData* monitor;
    struct GetAssetUploadUrlResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAssetUploadUrlResponse_FWDDECL)
#define IL2CPP_STRUCT_GetAssetUploadUrlResponse_FWDDECL
#include <Modloader/app/structs/GetAssetUploadUrlResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetAssetUploadUrlResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAssetUploadUrlResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetAssetUploadUrlResponse_FWDDECL)
#include <Modloader/app/structs/GetAssetUploadUrlResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAssetUploadUrlResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
