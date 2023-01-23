#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRNotifications_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRNotifications_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRNotifications_DEFINED)
#include <Modloader/app/structs/CVRNotifications__Fields.h>
#if defined(IL2CPP_STRUCT_CVRNotifications__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRNotifications_DEFINED
struct CVRNotifications__Class;
struct CVRNotifications {
    struct CVRNotifications__Class* klass;
    MonitorData* monitor;
    struct CVRNotifications__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRNotifications_FWDDECL)
#define IL2CPP_STRUCT_CVRNotifications_FWDDECL
#include <Modloader/app/structs/CVRNotifications__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRNotifications_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRNotifications_DEFINED) && !defined(IL2CPP_STRUCT_CVRNotifications_FWDDECL)
#include <Modloader/app/structs/CVRNotifications.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRNotifications.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
