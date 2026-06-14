#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerSyncProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerSyncProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_ListenerSyncProcessor__Fields_DEFINED
struct ListenerSyncProcessor_ListenerSyncTask__Array;
struct UInt64__Array;
struct __declspec(align(8)) ListenerSyncProcessor__Fields {
    struct ListenerSyncProcessor_ListenerSyncTask__Array* m_listenerSyncTasks;
    struct UInt64__Array* m_defaultListeners;
    bool m_defaultListenersRequireUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListenerSyncProcessor__Fields_FWDDECL
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#endif
#undef IL2CPP_STRUCT_ListenerSyncProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListenerSyncProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/ListenerSyncProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerSyncProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
