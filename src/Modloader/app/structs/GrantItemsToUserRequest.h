#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrantItemsToUserRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrantItemsToUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantItemsToUserRequest_DEFINED)
#include <Modloader/app/structs/GrantItemsToUserRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GrantItemsToUserRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GrantItemsToUserRequest_DEFINED
struct GrantItemsToUserRequest__Class;
struct GrantItemsToUserRequest {
    struct GrantItemsToUserRequest__Class* klass;
    MonitorData* monitor;
    struct GrantItemsToUserRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrantItemsToUserRequest_FWDDECL)
#define IL2CPP_STRUCT_GrantItemsToUserRequest_FWDDECL
#include <Modloader/app/structs/GrantItemsToUserRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GrantItemsToUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantItemsToUserRequest_DEFINED) && !defined(IL2CPP_STRUCT_GrantItemsToUserRequest_FWDDECL)
#include <Modloader/app/structs/GrantItemsToUserRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrantItemsToUserRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
