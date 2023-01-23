#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileShare__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileShare__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileShare__Enum_DEFINED)
#define IL2CPP_STRUCT_FileShare__Enum_DEFINED
enum class FileShare__Enum : int32_t {
    None = 0x00000000,
    Read = 0x00000001,
    Write = 0x00000002,
    ReadWrite = 0x00000003,
    Delete = 0x00000004,
    Inheritable = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_FileShare__Enum_FWDDECL)
#define IL2CPP_STRUCT_FileShare__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FileShare__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileShare__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FileShare__Enum_FWDDECL)
#include <Modloader/app/structs/FileShare__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileShare__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
