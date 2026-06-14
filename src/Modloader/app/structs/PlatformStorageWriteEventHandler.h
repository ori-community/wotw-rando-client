#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformStorageWriteEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformStorageWriteEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformStorageWriteEventHandler_DEFINED)
#include <Modloader/app/structs/PlatformStorageWriteEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformStorageWriteEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformStorageWriteEventHandler_DEFINED
struct PlatformStorageWriteEventHandler__Class;
struct PlatformStorageWriteEventHandler {
    struct PlatformStorageWriteEventHandler__Class* klass;
    MonitorData* monitor;
    struct PlatformStorageWriteEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformStorageWriteEventHandler_FWDDECL)
#define IL2CPP_STRUCT_PlatformStorageWriteEventHandler_FWDDECL
#include <Modloader/app/structs/PlatformStorageWriteEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformStorageWriteEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformStorageWriteEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_PlatformStorageWriteEventHandler_FWDDECL)
#include <Modloader/app/structs/PlatformStorageWriteEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformStorageWriteEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
