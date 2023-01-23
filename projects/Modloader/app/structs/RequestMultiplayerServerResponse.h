#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestMultiplayerServerResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestMultiplayerServerResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestMultiplayerServerResponse_DEFINED)
#include <Modloader/app/structs/RequestMultiplayerServerResponse__Fields.h>
#if defined(IL2CPP_STRUCT_RequestMultiplayerServerResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestMultiplayerServerResponse_DEFINED
struct RequestMultiplayerServerResponse__Class;
struct RequestMultiplayerServerResponse {
    struct RequestMultiplayerServerResponse__Class* klass;
    MonitorData* monitor;
    struct RequestMultiplayerServerResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestMultiplayerServerResponse_FWDDECL)
#define IL2CPP_STRUCT_RequestMultiplayerServerResponse_FWDDECL
#include <Modloader/app/structs/RequestMultiplayerServerResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestMultiplayerServerResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestMultiplayerServerResponse_DEFINED) && !defined(IL2CPP_STRUCT_RequestMultiplayerServerResponse_FWDDECL)
#include <Modloader/app/structs/RequestMultiplayerServerResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestMultiplayerServerResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
