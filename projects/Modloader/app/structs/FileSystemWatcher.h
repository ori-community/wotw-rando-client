#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileSystemWatcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileSystemWatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSystemWatcher_DEFINED)
#include <Modloader/app/structs/FileSystemWatcher__Fields.h>
#if defined(IL2CPP_STRUCT_FileSystemWatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_FileSystemWatcher_DEFINED
struct FileSystemWatcher__Class;
struct FileSystemWatcher {
    struct FileSystemWatcher__Class* klass;
    MonitorData* monitor;
    struct FileSystemWatcher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileSystemWatcher_FWDDECL)
#define IL2CPP_STRUCT_FileSystemWatcher_FWDDECL
#include <Modloader/app/structs/FileSystemWatcher__Class.h>
#endif
#undef IL2CPP_STRUCT_FileSystemWatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSystemWatcher_DEFINED) && !defined(IL2CPP_STRUCT_FileSystemWatcher_FWDDECL)
#include <Modloader/app/structs/FileSystemWatcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileSystemWatcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
