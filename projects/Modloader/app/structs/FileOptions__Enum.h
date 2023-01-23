#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_FileOptions__Enum_DEFINED
enum class FileOptions__Enum : int32_t {
    None = 0x00000000,
    Encrypted = 0x00004000,
    DeleteOnClose = 0x04000000,
    SequentialScan = 0x08000000,
    RandomAccess = 0x10000000,
    Asynchronous = 0x40000000,
    WriteThrough = -2147483648,
};
#endif
#if !defined(IL2CPP_STRUCT_FileOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_FileOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FileOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FileOptions__Enum_FWDDECL)
#include <Modloader/app/structs/FileOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
