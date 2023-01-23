#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_DEFINED)
#define IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_DEFINED
struct PlatformStorageWriteEventHandler;
struct PlatformStorageReadEventHandler;
struct PlatformStorageClearEventHandler;
struct __declspec(align(8)) XalService_ManagedStorageHandlers__Fields {
    struct PlatformStorageWriteEventHandler* WriteHandler;
    struct PlatformStorageReadEventHandler* ReadHandler;
    struct PlatformStorageClearEventHandler* ClearHandler;
};
#endif
#if !defined(IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_FWDDECL)
#define IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_FWDDECL
#include <Modloader/app/structs/PlatformStorageClearEventHandler.h>
#include <Modloader/app/structs/PlatformStorageReadEventHandler.h>
#include <Modloader/app/structs/PlatformStorageWriteEventHandler.h>
#endif
#undef IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XalService_ManagedStorageHandlers__Fields_FWDDECL)
#include <Modloader/app/structs/XalService_ManagedStorageHandlers__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalService_ManagedStorageHandlers__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
