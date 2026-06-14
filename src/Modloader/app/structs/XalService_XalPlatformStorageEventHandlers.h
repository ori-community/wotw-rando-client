#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_DEFINED)
#define IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_DEFINED
struct XalService_XalPlatformStorageWriteEventHandler;
struct XalService_XalPlatformStorageReadEventHandler;
struct XalService_XalPlatformStorageClearEventHandler;
struct XalService_XalPlatformStorageEventHandlers {
    struct XalService_XalPlatformStorageWriteEventHandler* Write;
    struct XalService_XalPlatformStorageReadEventHandler* Read;
    struct XalService_XalPlatformStorageClearEventHandler* Clear;
    void* Context;
};
#endif
#if !defined(IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_FWDDECL)
#define IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_FWDDECL
#include <Modloader/app/structs/XalService_XalPlatformStorageClearEventHandler.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageReadEventHandler.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageWriteEventHandler.h>
#endif
#undef IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_DEFINED) && !defined(IL2CPP_STRUCT_XalService_XalPlatformStorageEventHandlers_FWDDECL)
#include <Modloader/app/structs/XalService_XalPlatformStorageEventHandlers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalService_XalPlatformStorageEventHandlers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
