#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFriendsListRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFriendsListRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFriendsListRequest_DEFINED)
#include <Modloader/app/structs/GetFriendsListRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetFriendsListRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetFriendsListRequest_DEFINED
struct GetFriendsListRequest__Class;
struct GetFriendsListRequest {
    struct GetFriendsListRequest__Class* klass;
    MonitorData* monitor;
    struct GetFriendsListRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFriendsListRequest_FWDDECL)
#define IL2CPP_STRUCT_GetFriendsListRequest_FWDDECL
#include <Modloader/app/structs/GetFriendsListRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetFriendsListRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFriendsListRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetFriendsListRequest_FWDDECL)
#include <Modloader/app/structs/GetFriendsListRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFriendsListRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
