#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileSystemInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileSystemInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSystemInfo__Fields_DEFINED)
#include <Modloader/app/structs/MarshalByRefObject__Fields.h>
#include <Modloader/app/structs/MonoIOStat.h>
#if defined(IL2CPP_STRUCT_MarshalByRefObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_MonoIOStat_DEFINED)
#define IL2CPP_STRUCT_FileSystemInfo__Fields_DEFINED
struct String;
struct FileSystemInfo__Fields {
    struct MarshalByRefObject__Fields _;
    struct MonoIOStat _data;
    int32_t _dataInitialised;
    struct String* FullPath;
    struct String* OriginalPath;
    struct String* _displayPath;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileSystemInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileSystemInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FileSystemInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSystemInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileSystemInfo__Fields_FWDDECL)
#include <Modloader/app/structs/FileSystemInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileSystemInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
