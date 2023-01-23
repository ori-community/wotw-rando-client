#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendPushNotificationRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendPushNotificationRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendPushNotificationRequest_DEFINED)
#include <Modloader/app/structs/SendPushNotificationRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SendPushNotificationRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SendPushNotificationRequest_DEFINED
struct SendPushNotificationRequest__Class;
struct SendPushNotificationRequest {
    struct SendPushNotificationRequest__Class* klass;
    MonitorData* monitor;
    struct SendPushNotificationRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendPushNotificationRequest_FWDDECL)
#define IL2CPP_STRUCT_SendPushNotificationRequest_FWDDECL
#include <Modloader/app/structs/SendPushNotificationRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SendPushNotificationRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendPushNotificationRequest_DEFINED) && !defined(IL2CPP_STRUCT_SendPushNotificationRequest_FWDDECL)
#include <Modloader/app/structs/SendPushNotificationRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendPushNotificationRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
