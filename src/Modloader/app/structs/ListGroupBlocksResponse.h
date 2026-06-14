#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListGroupBlocksResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListGroupBlocksResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupBlocksResponse_DEFINED)
#include <Modloader/app/structs/ListGroupBlocksResponse__Fields.h>
#if defined(IL2CPP_STRUCT_ListGroupBlocksResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_ListGroupBlocksResponse_DEFINED
struct ListGroupBlocksResponse__Class;
struct ListGroupBlocksResponse {
    struct ListGroupBlocksResponse__Class* klass;
    MonitorData* monitor;
    struct ListGroupBlocksResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListGroupBlocksResponse_FWDDECL)
#define IL2CPP_STRUCT_ListGroupBlocksResponse_FWDDECL
#include <Modloader/app/structs/ListGroupBlocksResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_ListGroupBlocksResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupBlocksResponse_DEFINED) && !defined(IL2CPP_STRUCT_ListGroupBlocksResponse_FWDDECL)
#include <Modloader/app/structs/ListGroupBlocksResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListGroupBlocksResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
