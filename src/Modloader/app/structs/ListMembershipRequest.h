#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListMembershipRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListMembershipRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMembershipRequest_DEFINED)
#include <Modloader/app/structs/ListMembershipRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListMembershipRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListMembershipRequest_DEFINED
struct ListMembershipRequest__Class;
struct ListMembershipRequest {
    struct ListMembershipRequest__Class* klass;
    MonitorData* monitor;
    struct ListMembershipRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListMembershipRequest_FWDDECL)
#define IL2CPP_STRUCT_ListMembershipRequest_FWDDECL
#include <Modloader/app/structs/ListMembershipRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListMembershipRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMembershipRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListMembershipRequest_FWDDECL)
#include <Modloader/app/structs/ListMembershipRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListMembershipRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
