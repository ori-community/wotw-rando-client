#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRNotifications_CreateNotification_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRNotifications_CreateNotification_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRNotifications_CreateNotification_DEFINED)
#include <Modloader/app/structs/IVRNotifications_CreateNotification__Fields.h>
#if defined(IL2CPP_STRUCT_IVRNotifications_CreateNotification__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRNotifications_CreateNotification_DEFINED
struct IVRNotifications_CreateNotification__Class;
struct IVRNotifications_CreateNotification {
    struct IVRNotifications_CreateNotification__Class* klass;
    MonitorData* monitor;
    struct IVRNotifications_CreateNotification__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRNotifications_CreateNotification_FWDDECL)
#define IL2CPP_STRUCT_IVRNotifications_CreateNotification_FWDDECL
#include <Modloader/app/structs/IVRNotifications_CreateNotification__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRNotifications_CreateNotification_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRNotifications_CreateNotification_DEFINED) && !defined(IL2CPP_STRUCT_IVRNotifications_CreateNotification_FWDDECL)
#include <Modloader/app/structs/IVRNotifications_CreateNotification.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRNotifications_CreateNotification.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
