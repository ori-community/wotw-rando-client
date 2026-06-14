#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason__DEFINED)
#define IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_DEFINED
struct String;
struct GameServerHostStoppedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* InstanceId;
    struct String* InstanceProvider;
    struct String* InstanceType;
    struct String* Region_1;
    struct String* ServerBuildVersion;
    struct String* ServerHost;
    struct String* ServerIPV4Address;
    struct String* ServerIPV6Address;
    struct DateTime StartTime;
    struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason_ StopReason;
    struct DateTime StopTime;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/GameServerHostStoppedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameServerHostStoppedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
