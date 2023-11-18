#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushNotificationRegistration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushNotificationRegistration_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushNotificationRegistration_DEFINED)
#include <Modloader/app/structs/PushNotificationRegistration__Fields.h>
#if defined(IL2CPP_STRUCT_PushNotificationRegistration__Fields_DEFINED)
#define IL2CPP_STRUCT_PushNotificationRegistration_DEFINED
struct PushNotificationRegistration__Class;
struct PushNotificationRegistration {
    struct PushNotificationRegistration__Class* klass;
    MonitorData* monitor;
    struct PushNotificationRegistration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushNotificationRegistration_FWDDECL)
#define IL2CPP_STRUCT_PushNotificationRegistration_FWDDECL
#include <Modloader/app/structs/PushNotificationRegistration__Class.h>
#endif
#undef IL2CPP_STRUCT_PushNotificationRegistration_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushNotificationRegistration_DEFINED) && !defined(IL2CPP_STRUCT_PushNotificationRegistration_FWDDECL)
#include <Modloader/app/structs/PushNotificationRegistration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushNotificationRegistration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
