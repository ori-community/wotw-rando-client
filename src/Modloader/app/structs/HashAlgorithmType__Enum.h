#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HashAlgorithmType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HashAlgorithmType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashAlgorithmType__Enum_DEFINED)
#define IL2CPP_STRUCT_HashAlgorithmType__Enum_DEFINED
enum class HashAlgorithmType__Enum : int32_t {
    Md5 = 0x00000000,
    None = 0x00000001,
    Sha1 = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_HashAlgorithmType__Enum_FWDDECL)
#define IL2CPP_STRUCT_HashAlgorithmType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HashAlgorithmType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashAlgorithmType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HashAlgorithmType__Enum_FWDDECL)
#include <Modloader/app/structs/HashAlgorithmType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HashAlgorithmType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
