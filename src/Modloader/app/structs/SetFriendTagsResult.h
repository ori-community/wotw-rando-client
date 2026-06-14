#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetFriendTagsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetFriendTagsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetFriendTagsResult_DEFINED)
#include <Modloader/app/structs/SetFriendTagsResult__Fields.h>
#if defined(IL2CPP_STRUCT_SetFriendTagsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SetFriendTagsResult_DEFINED
struct SetFriendTagsResult__Class;
struct SetFriendTagsResult {
    struct SetFriendTagsResult__Class* klass;
    MonitorData* monitor;
    struct SetFriendTagsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetFriendTagsResult_FWDDECL)
#define IL2CPP_STRUCT_SetFriendTagsResult_FWDDECL
#include <Modloader/app/structs/SetFriendTagsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SetFriendTagsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetFriendTagsResult_DEFINED) && !defined(IL2CPP_STRUCT_SetFriendTagsResult_FWDDECL)
#include <Modloader/app/structs/SetFriendTagsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetFriendTagsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
