#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendPushNotificationRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendPushNotificationRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendPushNotificationRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_SendPushNotificationRequest__Fields_DEFINED
struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg_;
struct String;
struct PushNotificationPackage;
struct List_1_PlayFab_ServerModels_PushNotificationPlatform_;
struct SendPushNotificationRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg_* AdvancedPlatformDelivery;
    struct String* Message;
    struct PushNotificationPackage* Package;
    struct String* Recipient;
    struct String* Subject;
    struct List_1_PlayFab_ServerModels_PushNotificationPlatform_* TargetPlatforms;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendPushNotificationRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_SendPushNotificationRequest__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_AdvancedPushPlatformMsg_.h>
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_PushNotificationPlatform_.h>
#include <Modloader/app/structs/PushNotificationPackage.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SendPushNotificationRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendPushNotificationRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SendPushNotificationRequest__Fields_FWDDECL)
#include <Modloader/app/structs/SendPushNotificationRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendPushNotificationRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
