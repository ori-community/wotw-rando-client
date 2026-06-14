#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DllImportSearchPath__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DllImportSearchPath__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllImportSearchPath__Enum_DEFINED)
#define IL2CPP_STRUCT_DllImportSearchPath__Enum_DEFINED
enum class DllImportSearchPath__Enum : int32_t {
    UseDllDirectoryForDependencies = 0x00000100,
    ApplicationDirectory = 0x00000200,
    UserDirectories = 0x00000400,
    System32 = 0x00000800,
    SafeDirectories = 0x00001000,
    AssemblyDirectory = 0x00000002,
    LegacyBehavior = 0x00000000,
};
#endif
#if !defined(IL2CPP_STRUCT_DllImportSearchPath__Enum_FWDDECL)
#define IL2CPP_STRUCT_DllImportSearchPath__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DllImportSearchPath__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllImportSearchPath__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DllImportSearchPath__Enum_FWDDECL)
#include <Modloader/app/structs/DllImportSearchPath__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DllImportSearchPath__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
