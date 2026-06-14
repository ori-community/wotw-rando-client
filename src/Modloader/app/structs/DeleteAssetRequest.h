#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteAssetRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteAssetRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteAssetRequest_DEFINED)
#include <Modloader/app/structs/DeleteAssetRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteAssetRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteAssetRequest_DEFINED
struct DeleteAssetRequest__Class;
struct DeleteAssetRequest {
    struct DeleteAssetRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteAssetRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteAssetRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteAssetRequest_FWDDECL
#include <Modloader/app/structs/DeleteAssetRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteAssetRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteAssetRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteAssetRequest_FWDDECL)
#include <Modloader/app/structs/DeleteAssetRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteAssetRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
