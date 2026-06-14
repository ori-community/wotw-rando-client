#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectoryInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectoryInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectoryInfo_DEFINED)
#include <Modloader/app/structs/DirectoryInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DirectoryInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectoryInfo_DEFINED
struct DirectoryInfo__Class;
struct DirectoryInfo {
    struct DirectoryInfo__Class* klass;
    MonitorData* monitor;
    struct DirectoryInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectoryInfo_FWDDECL)
#define IL2CPP_STRUCT_DirectoryInfo_FWDDECL
#include <Modloader/app/structs/DirectoryInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectoryInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectoryInfo_DEFINED) && !defined(IL2CPP_STRUCT_DirectoryInfo_FWDDECL)
#include <Modloader/app/structs/DirectoryInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectoryInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
