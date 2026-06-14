#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform__DEFINED)
#define IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_DEFINED
struct String;
struct PlayerRegisteredPushNotificationsEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* DeviceToken;
    struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ Platform;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerRegisteredPushNotificationsEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerRegisteredPushNotificationsEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerRegisteredPushNotificationsEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
