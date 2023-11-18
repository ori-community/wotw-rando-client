#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListGroupApplicationsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListGroupApplicationsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupApplicationsRequest_DEFINED)
#include <Modloader/app/structs/ListGroupApplicationsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListGroupApplicationsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListGroupApplicationsRequest_DEFINED
struct ListGroupApplicationsRequest__Class;
struct ListGroupApplicationsRequest {
    struct ListGroupApplicationsRequest__Class* klass;
    MonitorData* monitor;
    struct ListGroupApplicationsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListGroupApplicationsRequest_FWDDECL)
#define IL2CPP_STRUCT_ListGroupApplicationsRequest_FWDDECL
#include <Modloader/app/structs/ListGroupApplicationsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListGroupApplicationsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupApplicationsRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListGroupApplicationsRequest_FWDDECL)
#include <Modloader/app/structs/ListGroupApplicationsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListGroupApplicationsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
