#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushNotificationPackage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushNotificationPackage_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushNotificationPackage_DEFINED)
#include <Modloader/app/structs/PushNotificationPackage__Fields.h>
#if defined(IL2CPP_STRUCT_PushNotificationPackage__Fields_DEFINED)
#define IL2CPP_STRUCT_PushNotificationPackage_DEFINED
struct PushNotificationPackage__Class;
struct PushNotificationPackage {
    struct PushNotificationPackage__Class* klass;
    MonitorData* monitor;
    struct PushNotificationPackage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushNotificationPackage_FWDDECL)
#define IL2CPP_STRUCT_PushNotificationPackage_FWDDECL
#include <Modloader/app/structs/PushNotificationPackage__Class.h>
#endif
#undef IL2CPP_STRUCT_PushNotificationPackage_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushNotificationPackage_DEFINED) && !defined(IL2CPP_STRUCT_PushNotificationPackage_FWDDECL)
#include <Modloader/app/structs/PushNotificationPackage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushNotificationPackage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
