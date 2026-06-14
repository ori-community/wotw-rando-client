#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddFriendResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddFriendResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddFriendResult_DEFINED)
#include <Modloader/app/structs/AddFriendResult__Fields.h>
#if defined(IL2CPP_STRUCT_AddFriendResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AddFriendResult_DEFINED
struct AddFriendResult__Class;
struct AddFriendResult {
    struct AddFriendResult__Class* klass;
    MonitorData* monitor;
    struct AddFriendResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddFriendResult_FWDDECL)
#define IL2CPP_STRUCT_AddFriendResult_FWDDECL
#include <Modloader/app/structs/AddFriendResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AddFriendResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddFriendResult_DEFINED) && !defined(IL2CPP_STRUCT_AddFriendResult_FWDDECL)
#include <Modloader/app/structs/AddFriendResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddFriendResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
