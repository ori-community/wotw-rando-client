#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListGroupMembersResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListGroupMembersResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupMembersResponse_DEFINED)
#include <Modloader/app/structs/ListGroupMembersResponse__Fields.h>
#if defined(IL2CPP_STRUCT_ListGroupMembersResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_ListGroupMembersResponse_DEFINED
struct ListGroupMembersResponse__Class;
struct ListGroupMembersResponse {
    struct ListGroupMembersResponse__Class* klass;
    MonitorData* monitor;
    struct ListGroupMembersResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListGroupMembersResponse_FWDDECL)
#define IL2CPP_STRUCT_ListGroupMembersResponse_FWDDECL
#include <Modloader/app/structs/ListGroupMembersResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_ListGroupMembersResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupMembersResponse_DEFINED) && !defined(IL2CPP_STRUCT_ListGroupMembersResponse_FWDDECL)
#include <Modloader/app/structs/ListGroupMembersResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListGroupMembersResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
