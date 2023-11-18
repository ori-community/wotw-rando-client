#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListMembershipResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListMembershipResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMembershipResponse_DEFINED)
#include <Modloader/app/structs/ListMembershipResponse__Fields.h>
#if defined(IL2CPP_STRUCT_ListMembershipResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_ListMembershipResponse_DEFINED
struct ListMembershipResponse__Class;
struct ListMembershipResponse {
    struct ListMembershipResponse__Class* klass;
    MonitorData* monitor;
    struct ListMembershipResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListMembershipResponse_FWDDECL)
#define IL2CPP_STRUCT_ListMembershipResponse_FWDDECL
#include <Modloader/app/structs/ListMembershipResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_ListMembershipResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMembershipResponse_DEFINED) && !defined(IL2CPP_STRUCT_ListMembershipResponse_FWDDECL)
#include <Modloader/app/structs/ListMembershipResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListMembershipResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
