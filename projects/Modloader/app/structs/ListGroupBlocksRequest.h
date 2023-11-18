#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListGroupBlocksRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListGroupBlocksRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupBlocksRequest_DEFINED)
#include <Modloader/app/structs/ListGroupBlocksRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListGroupBlocksRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListGroupBlocksRequest_DEFINED
struct ListGroupBlocksRequest__Class;
struct ListGroupBlocksRequest {
    struct ListGroupBlocksRequest__Class* klass;
    MonitorData* monitor;
    struct ListGroupBlocksRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListGroupBlocksRequest_FWDDECL)
#define IL2CPP_STRUCT_ListGroupBlocksRequest_FWDDECL
#include <Modloader/app/structs/ListGroupBlocksRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListGroupBlocksRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupBlocksRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListGroupBlocksRequest_FWDDECL)
#include <Modloader/app/structs/ListGroupBlocksRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListGroupBlocksRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
