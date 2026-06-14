#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_DEFINED)
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Fields.h>
#if defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_DEFINED)
#define IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_DEFINED
struct ListenerSyncProcessor_ListenerSyncTask__Class;
struct ListenerSyncProcessor_ListenerSyncTask {
    struct ListenerSyncProcessor_ListenerSyncTask__Class* klass;
    MonitorData* monitor;
    struct ListenerSyncProcessor_ListenerSyncTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_FWDDECL)
#define IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_FWDDECL
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Class.h>
#endif
#undef IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_DEFINED) && !defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask_FWDDECL)
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
