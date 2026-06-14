#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_DEFINED
struct String;
struct __declspec(align(8)) MultiplayerServerVmRemoteUserCreatedEventPayload__Fields {
    struct Nullable_1_DateTime_ ExpirationTime;
    struct String* Username;
    struct String* VmId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_FWDDECL)
#define IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MultiplayerServerVmRemoteUserCreatedEventPayload__Fields_FWDDECL)
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventPayload__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventPayload__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
