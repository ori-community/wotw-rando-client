#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformStorageReadEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformStorageReadEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformStorageReadEventHandler_DEFINED)
#include <Modloader/app/structs/PlatformStorageReadEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformStorageReadEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformStorageReadEventHandler_DEFINED
struct PlatformStorageReadEventHandler__Class;
struct PlatformStorageReadEventHandler {
    struct PlatformStorageReadEventHandler__Class* klass;
    MonitorData* monitor;
    struct PlatformStorageReadEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformStorageReadEventHandler_FWDDECL)
#define IL2CPP_STRUCT_PlatformStorageReadEventHandler_FWDDECL
#include <Modloader/app/structs/PlatformStorageReadEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformStorageReadEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformStorageReadEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_PlatformStorageReadEventHandler_FWDDECL)
#include <Modloader/app/structs/PlatformStorageReadEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformStorageReadEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
