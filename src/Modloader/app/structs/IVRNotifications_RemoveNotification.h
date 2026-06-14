#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRNotifications_RemoveNotification_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRNotifications_RemoveNotification_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRNotifications_RemoveNotification_DEFINED)
#include <Modloader/app/structs/IVRNotifications_RemoveNotification__Fields.h>
#if defined(IL2CPP_STRUCT_IVRNotifications_RemoveNotification__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRNotifications_RemoveNotification_DEFINED
struct IVRNotifications_RemoveNotification__Class;
struct IVRNotifications_RemoveNotification {
    struct IVRNotifications_RemoveNotification__Class* klass;
    MonitorData* monitor;
    struct IVRNotifications_RemoveNotification__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRNotifications_RemoveNotification_FWDDECL)
#define IL2CPP_STRUCT_IVRNotifications_RemoveNotification_FWDDECL
#include <Modloader/app/structs/IVRNotifications_RemoveNotification__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRNotifications_RemoveNotification_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRNotifications_RemoveNotification_DEFINED) && !defined(IL2CPP_STRUCT_IVRNotifications_RemoveNotification_FWDDECL)
#include <Modloader/app/structs/IVRNotifications_RemoveNotification.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRNotifications_RemoveNotification.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
