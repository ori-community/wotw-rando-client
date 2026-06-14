#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FriendInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FriendInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendInfo_DEFINED)
#include <Modloader/app/structs/FriendInfo__Fields.h>
#if defined(IL2CPP_STRUCT_FriendInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_FriendInfo_DEFINED
struct FriendInfo__Class;
struct FriendInfo {
    struct FriendInfo__Class* klass;
    MonitorData* monitor;
    struct FriendInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FriendInfo_FWDDECL)
#define IL2CPP_STRUCT_FriendInfo_FWDDECL
#include <Modloader/app/structs/FriendInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_FriendInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendInfo_DEFINED) && !defined(IL2CPP_STRUCT_FriendInfo_FWDDECL)
#include <Modloader/app/structs/FriendInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FriendInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
