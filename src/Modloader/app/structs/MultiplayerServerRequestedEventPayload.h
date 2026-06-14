#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_DEFINED)
#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload__Fields.h>
#if defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload__Fields_DEFINED)
#define IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_DEFINED
struct MultiplayerServerRequestedEventPayload__Class;
struct MultiplayerServerRequestedEventPayload {
    struct MultiplayerServerRequestedEventPayload__Class* klass;
    MonitorData* monitor;
    struct MultiplayerServerRequestedEventPayload__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_FWDDECL)
#define IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_FWDDECL
#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload__Class.h>
#endif
#undef IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_DEFINED) && !defined(IL2CPP_STRUCT_MultiplayerServerRequestedEventPayload_FWDDECL)
#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
