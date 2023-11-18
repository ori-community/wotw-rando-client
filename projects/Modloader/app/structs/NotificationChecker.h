#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotificationChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotificationChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotificationChecker_DEFINED)
#include <Modloader/app/structs/NotificationChecker__Fields.h>
#if defined(IL2CPP_STRUCT_NotificationChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_NotificationChecker_DEFINED
struct NotificationChecker__Class;
struct NotificationChecker {
    struct NotificationChecker__Class* klass;
    MonitorData* monitor;
    struct NotificationChecker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotificationChecker_FWDDECL)
#define IL2CPP_STRUCT_NotificationChecker_FWDDECL
#include <Modloader/app/structs/NotificationChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_NotificationChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotificationChecker_DEFINED) && !defined(IL2CPP_STRUCT_NotificationChecker_FWDDECL)
#include <Modloader/app/structs/NotificationChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotificationChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
