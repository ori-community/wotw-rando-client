#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerJoinedRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerJoinedRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerJoinedRequest_DEFINED)
#include <Modloader/app/structs/PlayerJoinedRequest__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerJoinedRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerJoinedRequest_DEFINED
struct PlayerJoinedRequest__Class;
struct PlayerJoinedRequest {
    struct PlayerJoinedRequest__Class* klass;
    MonitorData* monitor;
    struct PlayerJoinedRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerJoinedRequest_FWDDECL)
#define IL2CPP_STRUCT_PlayerJoinedRequest_FWDDECL
#include <Modloader/app/structs/PlayerJoinedRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerJoinedRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerJoinedRequest_DEFINED) && !defined(IL2CPP_STRUCT_PlayerJoinedRequest_FWDDECL)
#include <Modloader/app/structs/PlayerJoinedRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerJoinedRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
