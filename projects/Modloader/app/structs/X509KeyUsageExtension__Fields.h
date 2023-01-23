#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509KeyUsageExtension__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509KeyUsageExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509KeyUsageExtension__Fields_DEFINED)
#include <Modloader/app/structs/AsnDecodeStatus__Enum.h>
#include <Modloader/app/structs/X509Extension_1__Fields.h>
#include <Modloader/app/structs/X509KeyUsageFlags__Enum.h>
#if defined(IL2CPP_STRUCT_X509Extension_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_X509KeyUsageFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_AsnDecodeStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_X509KeyUsageExtension__Fields_DEFINED
struct X509KeyUsageExtension__Fields {
    struct X509Extension_1__Fields _;
    X509KeyUsageFlags__Enum _keyUsages;

    AsnDecodeStatus__Enum _status;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509KeyUsageExtension__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509KeyUsageExtension__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509KeyUsageExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509KeyUsageExtension__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509KeyUsageExtension__Fields_FWDDECL)
#include <Modloader/app/structs/X509KeyUsageExtension__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509KeyUsageExtension__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
