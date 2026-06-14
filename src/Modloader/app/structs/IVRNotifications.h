#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRNotifications_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRNotifications_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRNotifications_DEFINED)
#define IL2CPP_STRUCT_IVRNotifications_DEFINED
struct IVRNotifications_CreateNotification;
struct IVRNotifications_RemoveNotification;
struct IVRNotifications {
    struct IVRNotifications_CreateNotification* CreateNotification;
    struct IVRNotifications_RemoveNotification* RemoveNotification;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRNotifications_FWDDECL)
#define IL2CPP_STRUCT_IVRNotifications_FWDDECL
#include <Modloader/app/structs/IVRNotifications_CreateNotification.h>
#include <Modloader/app/structs/IVRNotifications_RemoveNotification.h>
#endif
#undef IL2CPP_STRUCT_IVRNotifications_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRNotifications_DEFINED) && !defined(IL2CPP_STRUCT_IVRNotifications_FWDDECL)
#include <Modloader/app/structs/IVRNotifications.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRNotifications.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
