#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_DEFINED)
#include <Modloader/app/structs/PushNotificationSentToPlayerEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_DEFINED
struct PushNotificationSentToPlayerEventData__Class;
struct PushNotificationSentToPlayerEventData {
    struct PushNotificationSentToPlayerEventData__Class* klass;
    MonitorData* monitor;
    struct PushNotificationSentToPlayerEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_FWDDECL)
#define IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_FWDDECL
#include <Modloader/app/structs/PushNotificationSentToPlayerEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_DEFINED) && !defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData_FWDDECL)
#include <Modloader/app/structs/PushNotificationSentToPlayerEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushNotificationSentToPlayerEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
