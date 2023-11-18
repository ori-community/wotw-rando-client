#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveFriendResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveFriendResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveFriendResult_DEFINED)
#include <Modloader/app/structs/RemoveFriendResult__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveFriendResult__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveFriendResult_DEFINED
struct RemoveFriendResult__Class;
struct RemoveFriendResult {
    struct RemoveFriendResult__Class* klass;
    MonitorData* monitor;
    struct RemoveFriendResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveFriendResult_FWDDECL)
#define IL2CPP_STRUCT_RemoveFriendResult_FWDDECL
#include <Modloader/app/structs/RemoveFriendResult__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveFriendResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveFriendResult_DEFINED) && !defined(IL2CPP_STRUCT_RemoveFriendResult_FWDDECL)
#include <Modloader/app/structs/RemoveFriendResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveFriendResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
