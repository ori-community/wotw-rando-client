#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_DEFINED)
#include <Modloader/app/structs/AsnDecodeStatus__Enum.h>
#include <Modloader/app/structs/X509Extension_1__Fields.h>
#if defined(IL2CPP_STRUCT_X509Extension_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_AsnDecodeStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_DEFINED
struct OidCollection;
struct X509EnhancedKeyUsageExtension__Fields {
    struct X509Extension_1__Fields _;
    struct OidCollection* _enhKeyUsage;
    AsnDecodeStatus__Enum _status;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_FWDDECL
#include <Modloader/app/structs/OidCollection.h>
#endif
#undef IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509EnhancedKeyUsageExtension__Fields_FWDDECL)
#include <Modloader/app/structs/X509EnhancedKeyUsageExtension__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509EnhancedKeyUsageExtension__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
