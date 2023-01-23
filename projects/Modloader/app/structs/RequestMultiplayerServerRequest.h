#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestMultiplayerServerRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestMultiplayerServerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestMultiplayerServerRequest_DEFINED)
#include <Modloader/app/structs/RequestMultiplayerServerRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RequestMultiplayerServerRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestMultiplayerServerRequest_DEFINED
struct RequestMultiplayerServerRequest__Class;
struct RequestMultiplayerServerRequest {
    struct RequestMultiplayerServerRequest__Class* klass;
    MonitorData* monitor;
    struct RequestMultiplayerServerRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestMultiplayerServerRequest_FWDDECL)
#define IL2CPP_STRUCT_RequestMultiplayerServerRequest_FWDDECL
#include <Modloader/app/structs/RequestMultiplayerServerRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestMultiplayerServerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestMultiplayerServerRequest_DEFINED) && !defined(IL2CPP_STRUCT_RequestMultiplayerServerRequest_FWDDECL)
#include <Modloader/app/structs/RequestMultiplayerServerRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestMultiplayerServerRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
