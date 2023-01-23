#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_DEFINED)
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventPayload__Fields.h>
#if defined(IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload__Fields_DEFINED)
#define IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_DEFINED
struct MultiplayerServerVmAssignedEventPayload__Class;
struct MultiplayerServerVmAssignedEventPayload {
    struct MultiplayerServerVmAssignedEventPayload__Class* klass;
    MonitorData* monitor;
    struct MultiplayerServerVmAssignedEventPayload__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_FWDDECL)
#define IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_FWDDECL
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventPayload__Class.h>
#endif
#undef IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_DEFINED) && !defined(IL2CPP_STRUCT_MultiplayerServerVmAssignedEventPayload_FWDDECL)
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventPayload.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventPayload.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
