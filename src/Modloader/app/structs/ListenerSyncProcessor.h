#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerSyncProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerSyncProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_DEFINED)
#include <Modloader/app/structs/ListenerSyncProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_ListenerSyncProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_ListenerSyncProcessor_DEFINED
struct ListenerSyncProcessor__Class;
struct ListenerSyncProcessor {
    struct ListenerSyncProcessor__Class* klass;
    MonitorData* monitor;
    struct ListenerSyncProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_FWDDECL)
#define IL2CPP_STRUCT_ListenerSyncProcessor_FWDDECL
#include <Modloader/app/structs/ListenerSyncProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_ListenerSyncProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_DEFINED) && !defined(IL2CPP_STRUCT_ListenerSyncProcessor_FWDDECL)
#include <Modloader/app/structs/ListenerSyncProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerSyncProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
