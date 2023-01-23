#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_FileAttributes__Enum_DEFINED
enum class FileAttributes__Enum : int32_t {
    Archive = 0x00000020,
    Compressed = 0x00000800,
    Device = 0x00000040,
    Directory = 0x00000010,
    Encrypted = 0x00004000,
    Hidden = 0x00000002,
    Normal = 0x00000080,
    NotContentIndexed = 0x00002000,
    Offline = 0x00001000,
    ReadOnly = 0x00000001,
    ReparsePoint = 0x00000400,
    SparseFile = 0x00000200,
    System = 0x00000004,
    Temporary = 0x00000100,
    IntegrityStream = 0x00008000,
    NoScrubData = 0x00020000,
};
#endif
#if !defined(IL2CPP_STRUCT_FileAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_FileAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FileAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FileAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/FileAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
