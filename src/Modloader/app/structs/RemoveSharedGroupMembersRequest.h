#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_DEFINED)
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveSharedGroupMembersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_DEFINED
struct RemoveSharedGroupMembersRequest__Class;
struct RemoveSharedGroupMembersRequest {
    struct RemoveSharedGroupMembersRequest__Class* klass;
    MonitorData* monitor;
    struct RemoveSharedGroupMembersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_FWDDECL)
#define IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_FWDDECL
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_DEFINED) && !defined(IL2CPP_STRUCT_RemoveSharedGroupMembersRequest_FWDDECL)
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
