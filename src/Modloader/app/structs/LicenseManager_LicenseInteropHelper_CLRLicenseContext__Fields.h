#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_DEFINED)
#include <Modloader/app/structs/LicenseUsageMode__Enum.h>
#if defined(IL2CPP_STRUCT_LicenseUsageMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_DEFINED
struct Type;
struct String;
struct __declspec(align(8)) LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields {
    LicenseUsageMode__Enum usageMode;

    struct Type* type;
    struct String* key;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields_FWDDECL)
#include <Modloader/app/structs/LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
