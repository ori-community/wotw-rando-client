#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListGroupMembersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListGroupMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupMembersRequest_DEFINED)
#include <Modloader/app/structs/ListGroupMembersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListGroupMembersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListGroupMembersRequest_DEFINED
struct ListGroupMembersRequest__Class;
struct ListGroupMembersRequest {
    struct ListGroupMembersRequest__Class* klass;
    MonitorData* monitor;
    struct ListGroupMembersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListGroupMembersRequest_FWDDECL)
#define IL2CPP_STRUCT_ListGroupMembersRequest_FWDDECL
#include <Modloader/app/structs/ListGroupMembersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListGroupMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListGroupMembersRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListGroupMembersRequest_FWDDECL)
#include <Modloader/app/structs/ListGroupMembersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListGroupMembersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
