#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileBasedStorageHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileBasedStorageHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileBasedStorageHandler_DEFINED)
#include <Modloader/app/structs/FileBasedStorageHandler__Fields.h>
#if defined(IL2CPP_STRUCT_FileBasedStorageHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_FileBasedStorageHandler_DEFINED
struct FileBasedStorageHandler__Class;
struct FileBasedStorageHandler {
    struct FileBasedStorageHandler__Class* klass;
    MonitorData* monitor;
    struct FileBasedStorageHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileBasedStorageHandler_FWDDECL)
#define IL2CPP_STRUCT_FileBasedStorageHandler_FWDDECL
#include <Modloader/app/structs/FileBasedStorageHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_FileBasedStorageHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileBasedStorageHandler_DEFINED) && !defined(IL2CPP_STRUCT_FileBasedStorageHandler_FWDDECL)
#include <Modloader/app/structs/FileBasedStorageHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileBasedStorageHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
