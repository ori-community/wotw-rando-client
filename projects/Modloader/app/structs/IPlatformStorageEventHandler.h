#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlatformStorageEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlatformStorageEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlatformStorageEventHandler_DEFINED)
#define IL2CPP_STRUCT_IPlatformStorageEventHandler_DEFINED
struct IPlatformStorageEventHandler__Class;
struct IPlatformStorageEventHandler {
    struct IPlatformStorageEventHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlatformStorageEventHandler_FWDDECL)
#define IL2CPP_STRUCT_IPlatformStorageEventHandler_FWDDECL
#include <Modloader/app/structs/IPlatformStorageEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IPlatformStorageEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlatformStorageEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_IPlatformStorageEventHandler_FWDDECL)
#include <Modloader/app/structs/IPlatformStorageEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlatformStorageEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
