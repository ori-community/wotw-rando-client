#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformStorageClearEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformStorageClearEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformStorageClearEventHandler_DEFINED)
#include <Modloader/app/structs/PlatformStorageClearEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformStorageClearEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformStorageClearEventHandler_DEFINED
struct PlatformStorageClearEventHandler__Class;
struct PlatformStorageClearEventHandler {
    struct PlatformStorageClearEventHandler__Class* klass;
    MonitorData* monitor;
    struct PlatformStorageClearEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformStorageClearEventHandler_FWDDECL)
#define IL2CPP_STRUCT_PlatformStorageClearEventHandler_FWDDECL
#include <Modloader/app/structs/PlatformStorageClearEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformStorageClearEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformStorageClearEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_PlatformStorageClearEventHandler_FWDDECL)
#include <Modloader/app/structs/PlatformStorageClearEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformStorageClearEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
