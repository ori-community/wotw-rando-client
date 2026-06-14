#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListAssetSummariesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListAssetSummariesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListAssetSummariesRequest_DEFINED)
#include <Modloader/app/structs/ListAssetSummariesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListAssetSummariesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListAssetSummariesRequest_DEFINED
struct ListAssetSummariesRequest__Class;
struct ListAssetSummariesRequest {
    struct ListAssetSummariesRequest__Class* klass;
    MonitorData* monitor;
    struct ListAssetSummariesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListAssetSummariesRequest_FWDDECL)
#define IL2CPP_STRUCT_ListAssetSummariesRequest_FWDDECL
#include <Modloader/app/structs/ListAssetSummariesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListAssetSummariesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListAssetSummariesRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListAssetSummariesRequest_FWDDECL)
#include <Modloader/app/structs/ListAssetSummariesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListAssetSummariesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
