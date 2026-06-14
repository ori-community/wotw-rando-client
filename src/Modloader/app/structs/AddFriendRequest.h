#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddFriendRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddFriendRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddFriendRequest_DEFINED)
#include <Modloader/app/structs/AddFriendRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AddFriendRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AddFriendRequest_DEFINED
struct AddFriendRequest__Class;
struct AddFriendRequest {
    struct AddFriendRequest__Class* klass;
    MonitorData* monitor;
    struct AddFriendRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddFriendRequest_FWDDECL)
#define IL2CPP_STRUCT_AddFriendRequest_FWDDECL
#include <Modloader/app/structs/AddFriendRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AddFriendRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddFriendRequest_DEFINED) && !defined(IL2CPP_STRUCT_AddFriendRequest_FWDDECL)
#include <Modloader/app/structs/AddFriendRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddFriendRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
