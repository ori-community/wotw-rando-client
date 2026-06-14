#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyNameFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyNameFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyNameFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_AssemblyNameFlags__Enum_DEFINED
enum class AssemblyNameFlags__Enum : int32_t {
    None = 0x00000000,
    PublicKey = 0x00000001,
    EnableJITcompileOptimizer = 0x00004000,
    EnableJITcompileTracking = 0x00008000,
    Retargetable = 0x00000100,
};
#endif
#if !defined(IL2CPP_STRUCT_AssemblyNameFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_AssemblyNameFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AssemblyNameFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyNameFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyNameFlags__Enum_FWDDECL)
#include <Modloader/app/structs/AssemblyNameFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyNameFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
