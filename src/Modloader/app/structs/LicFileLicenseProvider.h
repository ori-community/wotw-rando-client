#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicFileLicenseProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicFileLicenseProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicFileLicenseProvider_DEFINED)
#define IL2CPP_STRUCT_LicFileLicenseProvider_DEFINED
struct LicFileLicenseProvider__Class;
struct LicFileLicenseProvider {
    struct LicFileLicenseProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LicFileLicenseProvider_FWDDECL)
#define IL2CPP_STRUCT_LicFileLicenseProvider_FWDDECL
#include <Modloader/app/structs/LicFileLicenseProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_LicFileLicenseProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicFileLicenseProvider_DEFINED) && !defined(IL2CPP_STRUCT_LicFileLicenseProvider_FWDDECL)
#include <Modloader/app/structs/LicFileLicenseProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicFileLicenseProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
