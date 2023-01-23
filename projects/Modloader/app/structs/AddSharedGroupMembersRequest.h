#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddSharedGroupMembersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddSharedGroupMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddSharedGroupMembersRequest_DEFINED)
#include <Modloader/app/structs/AddSharedGroupMembersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AddSharedGroupMembersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AddSharedGroupMembersRequest_DEFINED
struct AddSharedGroupMembersRequest__Class;
struct AddSharedGroupMembersRequest {
    struct AddSharedGroupMembersRequest__Class* klass;
    MonitorData* monitor;
    struct AddSharedGroupMembersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddSharedGroupMembersRequest_FWDDECL)
#define IL2CPP_STRUCT_AddSharedGroupMembersRequest_FWDDECL
#include <Modloader/app/structs/AddSharedGroupMembersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AddSharedGroupMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddSharedGroupMembersRequest_DEFINED) && !defined(IL2CPP_STRUCT_AddSharedGroupMembersRequest_FWDDECL)
#include <Modloader/app/structs/AddSharedGroupMembersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddSharedGroupMembersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
