#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFriendsListResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFriendsListResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFriendsListResult_DEFINED)
#include <Modloader/app/structs/GetFriendsListResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetFriendsListResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetFriendsListResult_DEFINED
struct GetFriendsListResult__Class;
struct GetFriendsListResult {
    struct GetFriendsListResult__Class* klass;
    MonitorData* monitor;
    struct GetFriendsListResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFriendsListResult_FWDDECL)
#define IL2CPP_STRUCT_GetFriendsListResult_FWDDECL
#include <Modloader/app/structs/GetFriendsListResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetFriendsListResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFriendsListResult_DEFINED) && !defined(IL2CPP_STRUCT_GetFriendsListResult_FWDDECL)
#include <Modloader/app/structs/GetFriendsListResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFriendsListResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
