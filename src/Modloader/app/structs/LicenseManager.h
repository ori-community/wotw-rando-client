#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseManager_DEFINED)
#define IL2CPP_STRUCT_LicenseManager_DEFINED
struct LicenseManager__Class;
struct LicenseManager {
    struct LicenseManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LicenseManager_FWDDECL)
#define IL2CPP_STRUCT_LicenseManager_FWDDECL
#include <Modloader/app/structs/LicenseManager__Class.h>
#endif
#undef IL2CPP_STRUCT_LicenseManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseManager_DEFINED) && !defined(IL2CPP_STRUCT_LicenseManager_FWDDECL)
#include <Modloader/app/structs/LicenseManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
