#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendPushNotificationResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendPushNotificationResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendPushNotificationResult_DEFINED)
#include <Modloader/app/structs/SendPushNotificationResult__Fields.h>
#if defined(IL2CPP_STRUCT_SendPushNotificationResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SendPushNotificationResult_DEFINED
struct SendPushNotificationResult__Class;
struct SendPushNotificationResult {
    struct SendPushNotificationResult__Class* klass;
    MonitorData* monitor;
    struct SendPushNotificationResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendPushNotificationResult_FWDDECL)
#define IL2CPP_STRUCT_SendPushNotificationResult_FWDDECL
#include <Modloader/app/structs/SendPushNotificationResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SendPushNotificationResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendPushNotificationResult_DEFINED) && !defined(IL2CPP_STRUCT_SendPushNotificationResult_FWDDECL)
#include <Modloader/app/structs/SendPushNotificationResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendPushNotificationResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
