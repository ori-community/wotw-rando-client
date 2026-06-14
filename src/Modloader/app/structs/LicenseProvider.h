#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseProvider_DEFINED)
#define IL2CPP_STRUCT_LicenseProvider_DEFINED
struct LicenseProvider__Class;
struct LicenseProvider {
    struct LicenseProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LicenseProvider_FWDDECL)
#define IL2CPP_STRUCT_LicenseProvider_FWDDECL
#include <Modloader/app/structs/LicenseProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_LicenseProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseProvider_DEFINED) && !defined(IL2CPP_STRUCT_LicenseProvider_FWDDECL)
#include <Modloader/app/structs/LicenseProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
