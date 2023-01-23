#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserLicenseInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserLicenseInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserLicenseInformation_DEFINED)
#include <Modloader/app/structs/UserLicenseInformation__Fields.h>
#if defined(IL2CPP_STRUCT_UserLicenseInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_UserLicenseInformation_DEFINED
struct UserLicenseInformation__Class;
struct UserLicenseInformation {
    struct UserLicenseInformation__Class* klass;
    MonitorData* monitor;
    struct UserLicenseInformation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserLicenseInformation_FWDDECL)
#define IL2CPP_STRUCT_UserLicenseInformation_FWDDECL
#include <Modloader/app/structs/UserLicenseInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_UserLicenseInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserLicenseInformation_DEFINED) && !defined(IL2CPP_STRUCT_UserLicenseInformation_FWDDECL)
#include <Modloader/app/structs/UserLicenseInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserLicenseInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
