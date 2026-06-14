#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseProviderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseProviderAttribute_DEFINED)
#include <Modloader/app/structs/LicenseProviderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_LicenseProviderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_LicenseProviderAttribute_DEFINED
struct LicenseProviderAttribute__Class;
struct LicenseProviderAttribute {
    struct LicenseProviderAttribute__Class* klass;
    MonitorData* monitor;
    struct LicenseProviderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LicenseProviderAttribute_FWDDECL)
#define IL2CPP_STRUCT_LicenseProviderAttribute_FWDDECL
#include <Modloader/app/structs/LicenseProviderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_LicenseProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseProviderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_LicenseProviderAttribute_FWDDECL)
#include <Modloader/app/structs/LicenseProviderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseProviderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
