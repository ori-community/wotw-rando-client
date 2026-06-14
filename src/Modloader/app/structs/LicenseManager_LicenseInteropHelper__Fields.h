#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_DEFINED
struct DesigntimeLicenseContext;
struct LicenseContext;
struct Type;
struct __declspec(align(8)) LicenseManager_LicenseInteropHelper__Fields {
    struct DesigntimeLicenseContext* helperContext;
    struct LicenseContext* savedLicenseContext;
    struct Type* savedType;
};
#endif
#if !defined(IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_FWDDECL
#include <Modloader/app/structs/DesigntimeLicenseContext.h>
#include <Modloader/app/structs/LicenseContext.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LicenseManager_LicenseInteropHelper__Fields_FWDDECL)
#include <Modloader/app/structs/LicenseManager_LicenseInteropHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseManager_LicenseInteropHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
