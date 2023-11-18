#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrantItemsToUsersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrantItemsToUsersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantItemsToUsersRequest_DEFINED)
#include <Modloader/app/structs/GrantItemsToUsersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GrantItemsToUsersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GrantItemsToUsersRequest_DEFINED
struct GrantItemsToUsersRequest__Class;
struct GrantItemsToUsersRequest {
    struct GrantItemsToUsersRequest__Class* klass;
    MonitorData* monitor;
    struct GrantItemsToUsersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrantItemsToUsersRequest_FWDDECL)
#define IL2CPP_STRUCT_GrantItemsToUsersRequest_FWDDECL
#include <Modloader/app/structs/GrantItemsToUsersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GrantItemsToUsersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantItemsToUsersRequest_DEFINED) && !defined(IL2CPP_STRUCT_GrantItemsToUsersRequest_FWDDECL)
#include <Modloader/app/structs/GrantItemsToUsersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrantItemsToUsersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
