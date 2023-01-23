#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListBuildSummariesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListBuildSummariesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListBuildSummariesRequest_DEFINED)
#include <Modloader/app/structs/ListBuildSummariesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListBuildSummariesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListBuildSummariesRequest_DEFINED
struct ListBuildSummariesRequest__Class;
struct ListBuildSummariesRequest {
    struct ListBuildSummariesRequest__Class* klass;
    MonitorData* monitor;
    struct ListBuildSummariesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListBuildSummariesRequest_FWDDECL)
#define IL2CPP_STRUCT_ListBuildSummariesRequest_FWDDECL
#include <Modloader/app/structs/ListBuildSummariesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListBuildSummariesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListBuildSummariesRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListBuildSummariesRequest_FWDDECL)
#include <Modloader/app/structs/ListBuildSummariesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListBuildSummariesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
