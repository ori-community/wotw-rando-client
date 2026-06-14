#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_DEFINED)
#define IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_DEFINED
enum class AssemblyHashAlgorithm__Enum : int32_t {
    None = 0x00000000,
    MD5 = 0x00008003,
    SHA1 = 0x00008004,
    SHA256 = 0x0000800c,
    SHA384 = 0x0000800d,
    SHA512 = 0x0000800e,
};
#endif
#if !defined(IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_FWDDECL)
#define IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_FWDDECL)
#include <Modloader/app/structs/AssemblyHashAlgorithm__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyHashAlgorithm__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
