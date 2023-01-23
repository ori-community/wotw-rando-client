#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IListenerSyncProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IListenerSyncProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IListenerSyncProcessor_DEFINED)
#define IL2CPP_STRUCT_IListenerSyncProcessor_DEFINED
struct IListenerSyncProcessor__Class;
struct IListenerSyncProcessor {
    struct IListenerSyncProcessor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IListenerSyncProcessor_FWDDECL)
#define IL2CPP_STRUCT_IListenerSyncProcessor_FWDDECL
#include <Modloader/app/structs/IListenerSyncProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_IListenerSyncProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IListenerSyncProcessor_DEFINED) && !defined(IL2CPP_STRUCT_IListenerSyncProcessor_FWDDECL)
#include <Modloader/app/structs/IListenerSyncProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IListenerSyncProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
