#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveFriendRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveFriendRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveFriendRequest_DEFINED)
#include <Modloader/app/structs/RemoveFriendRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveFriendRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveFriendRequest_DEFINED
struct RemoveFriendRequest__Class;
struct RemoveFriendRequest {
    struct RemoveFriendRequest__Class* klass;
    MonitorData* monitor;
    struct RemoveFriendRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveFriendRequest_FWDDECL)
#define IL2CPP_STRUCT_RemoveFriendRequest_FWDDECL
#include <Modloader/app/structs/RemoveFriendRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveFriendRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveFriendRequest_DEFINED) && !defined(IL2CPP_STRUCT_RemoveFriendRequest_FWDDECL)
#include <Modloader/app/structs/RemoveFriendRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveFriendRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
