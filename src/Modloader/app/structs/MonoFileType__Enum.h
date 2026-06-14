#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoFileType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoFileType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoFileType__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoFileType__Enum_DEFINED
enum class MonoFileType__Enum : int32_t {
    Unknown = 0x00000000,
    Disk = 0x00000001,
    Char = 0x00000002,
    Pipe = 0x00000003,
    Remote = 0x00008000,
};
#endif
#if !defined(IL2CPP_STRUCT_MonoFileType__Enum_FWDDECL)
#define IL2CPP_STRUCT_MonoFileType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MonoFileType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoFileType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MonoFileType__Enum_FWDDECL)
#include <Modloader/app/structs/MonoFileType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoFileType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
