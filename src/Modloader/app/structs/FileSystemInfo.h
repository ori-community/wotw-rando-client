#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileSystemInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileSystemInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSystemInfo_DEFINED)
#include <Modloader/app/structs/FileSystemInfo__Fields.h>
#if defined(IL2CPP_STRUCT_FileSystemInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_FileSystemInfo_DEFINED
struct FileSystemInfo__Class;
struct FileSystemInfo {
    struct FileSystemInfo__Class* klass;
    MonitorData* monitor;
    struct FileSystemInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileSystemInfo_FWDDECL)
#define IL2CPP_STRUCT_FileSystemInfo_FWDDECL
#include <Modloader/app/structs/FileSystemInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_FileSystemInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSystemInfo_DEFINED) && !defined(IL2CPP_STRUCT_FileSystemInfo_FWDDECL)
#include <Modloader/app/structs/FileSystemInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileSystemInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
