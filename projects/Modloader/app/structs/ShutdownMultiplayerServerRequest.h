#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_DEFINED)
#include <Modloader/app/structs/ShutdownMultiplayerServerRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ShutdownMultiplayerServerRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_DEFINED
struct ShutdownMultiplayerServerRequest__Class;
struct ShutdownMultiplayerServerRequest {
    struct ShutdownMultiplayerServerRequest__Class* klass;
    MonitorData* monitor;
    struct ShutdownMultiplayerServerRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_FWDDECL)
#define IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_FWDDECL
#include <Modloader/app/structs/ShutdownMultiplayerServerRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_DEFINED) && !defined(IL2CPP_STRUCT_ShutdownMultiplayerServerRequest_FWDDECL)
#include <Modloader/app/structs/ShutdownMultiplayerServerRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShutdownMultiplayerServerRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
