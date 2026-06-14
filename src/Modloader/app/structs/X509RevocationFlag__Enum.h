#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509RevocationFlag__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509RevocationFlag__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509RevocationFlag__Enum_DEFINED)
#define IL2CPP_STRUCT_X509RevocationFlag__Enum_DEFINED
enum class X509RevocationFlag__Enum : int32_t {
    EndCertificateOnly = 0x00000000,
    EntireChain = 0x00000001,
    ExcludeRoot = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_X509RevocationFlag__Enum_FWDDECL)
#define IL2CPP_STRUCT_X509RevocationFlag__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509RevocationFlag__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509RevocationFlag__Enum_DEFINED) && !defined(IL2CPP_STRUCT_X509RevocationFlag__Enum_FWDDECL)
#include <Modloader/app/structs/X509RevocationFlag__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509RevocationFlag__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
