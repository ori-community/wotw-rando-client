#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListAssetSummariesResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListAssetSummariesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListAssetSummariesResponse_DEFINED)
#include <Modloader/app/structs/ListAssetSummariesResponse__Fields.h>
#if defined(IL2CPP_STRUCT_ListAssetSummariesResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_ListAssetSummariesResponse_DEFINED
struct ListAssetSummariesResponse__Class;
struct ListAssetSummariesResponse {
    struct ListAssetSummariesResponse__Class* klass;
    MonitorData* monitor;
    struct ListAssetSummariesResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListAssetSummariesResponse_FWDDECL)
#define IL2CPP_STRUCT_ListAssetSummariesResponse_FWDDECL
#include <Modloader/app/structs/ListAssetSummariesResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_ListAssetSummariesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListAssetSummariesResponse_DEFINED) && !defined(IL2CPP_STRUCT_ListAssetSummariesResponse_FWDDECL)
#include <Modloader/app/structs/ListAssetSummariesResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListAssetSummariesResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
