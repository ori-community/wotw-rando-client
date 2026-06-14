#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509NameType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509NameType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509NameType__Enum_DEFINED)
#define IL2CPP_STRUCT_X509NameType__Enum_DEFINED
enum class X509NameType__Enum : int32_t {
    SimpleName = 0x00000000,
    EmailName = 0x00000001,
    UpnName = 0x00000002,
    DnsName = 0x00000003,
    DnsFromAlternativeName = 0x00000004,
    UrlName = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_X509NameType__Enum_FWDDECL)
#define IL2CPP_STRUCT_X509NameType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509NameType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509NameType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_X509NameType__Enum_FWDDECL)
#include <Modloader/app/structs/X509NameType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509NameType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
