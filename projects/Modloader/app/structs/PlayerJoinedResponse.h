#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerJoinedResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerJoinedResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerJoinedResponse_DEFINED)
#include <Modloader/app/structs/PlayerJoinedResponse__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerJoinedResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerJoinedResponse_DEFINED
struct PlayerJoinedResponse__Class;
struct PlayerJoinedResponse {
    struct PlayerJoinedResponse__Class* klass;
    MonitorData* monitor;
    struct PlayerJoinedResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerJoinedResponse_FWDDECL)
#define IL2CPP_STRUCT_PlayerJoinedResponse_FWDDECL
#include <Modloader/app/structs/PlayerJoinedResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerJoinedResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerJoinedResponse_DEFINED) && !defined(IL2CPP_STRUCT_PlayerJoinedResponse_FWDDECL)
#include <Modloader/app/structs/PlayerJoinedResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerJoinedResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
