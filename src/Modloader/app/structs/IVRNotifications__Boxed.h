#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRNotifications__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRNotifications__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRNotifications__Boxed_DEFINED)
#include <Modloader/app/structs/IVRNotifications.h>
#if defined(IL2CPP_STRUCT_IVRNotifications_DEFINED)
#define IL2CPP_STRUCT_IVRNotifications__Boxed_DEFINED
struct IVRNotifications__Class;
struct IVRNotifications__Boxed {
    struct IVRNotifications__Class* klass;
    MonitorData* monitor;
    struct IVRNotifications fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRNotifications__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IVRNotifications__Boxed_FWDDECL
#include <Modloader/app/structs/IVRNotifications__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRNotifications__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRNotifications__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IVRNotifications__Boxed_FWDDECL)
#include <Modloader/app/structs/IVRNotifications__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRNotifications__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
