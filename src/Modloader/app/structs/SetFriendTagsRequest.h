#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetFriendTagsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetFriendTagsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetFriendTagsRequest_DEFINED)
#include <Modloader/app/structs/SetFriendTagsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetFriendTagsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetFriendTagsRequest_DEFINED
struct SetFriendTagsRequest__Class;
struct SetFriendTagsRequest {
    struct SetFriendTagsRequest__Class* klass;
    MonitorData* monitor;
    struct SetFriendTagsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetFriendTagsRequest_FWDDECL)
#define IL2CPP_STRUCT_SetFriendTagsRequest_FWDDECL
#include <Modloader/app/structs/SetFriendTagsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetFriendTagsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetFriendTagsRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetFriendTagsRequest_FWDDECL)
#include <Modloader/app/structs/SetFriendTagsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetFriendTagsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
