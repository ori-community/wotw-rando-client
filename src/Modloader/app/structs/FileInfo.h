#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileInfo_DEFINED)
#include <Modloader/app/structs/FileInfo__Fields.h>
#if defined(IL2CPP_STRUCT_FileInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_FileInfo_DEFINED
struct FileInfo__Class;
struct FileInfo {
    struct FileInfo__Class* klass;
    MonitorData* monitor;
    struct FileInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileInfo_FWDDECL)
#define IL2CPP_STRUCT_FileInfo_FWDDECL
#include <Modloader/app/structs/FileInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_FileInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileInfo_DEFINED) && !defined(IL2CPP_STRUCT_FileInfo_FWDDECL)
#include <Modloader/app/structs/FileInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
