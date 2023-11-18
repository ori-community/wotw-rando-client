#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InviteToGroupRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InviteToGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_InviteToGroupRequest_DEFINED)
#include <Modloader/app/structs/InviteToGroupRequest__Fields.h>
#if defined(IL2CPP_STRUCT_InviteToGroupRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_InviteToGroupRequest_DEFINED
struct InviteToGroupRequest__Class;
struct InviteToGroupRequest {
    struct InviteToGroupRequest__Class* klass;
    MonitorData* monitor;
    struct InviteToGroupRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InviteToGroupRequest_FWDDECL)
#define IL2CPP_STRUCT_InviteToGroupRequest_FWDDECL
#include <Modloader/app/structs/InviteToGroupRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_InviteToGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_InviteToGroupRequest_DEFINED) && !defined(IL2CPP_STRUCT_InviteToGroupRequest_FWDDECL)
#include <Modloader/app/structs/InviteToGroupRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InviteToGroupRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
