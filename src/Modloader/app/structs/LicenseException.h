#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseException_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseException_DEFINED)
#include <Modloader/app/structs/LicenseException__Fields.h>
#if defined(IL2CPP_STRUCT_LicenseException__Fields_DEFINED)
#define IL2CPP_STRUCT_LicenseException_DEFINED
struct LicenseException__Class;
struct LicenseException {
    struct LicenseException__Class* klass;
    MonitorData* monitor;
    struct LicenseException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LicenseException_FWDDECL)
#define IL2CPP_STRUCT_LicenseException_FWDDECL
#include <Modloader/app/structs/LicenseException__Class.h>
#endif
#undef IL2CPP_STRUCT_LicenseException_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseException_DEFINED) && !defined(IL2CPP_STRUCT_LicenseException_FWDDECL)
#include <Modloader/app/structs/LicenseException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
