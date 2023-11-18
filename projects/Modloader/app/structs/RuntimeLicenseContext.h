#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeLicenseContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeLicenseContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeLicenseContext_DEFINED)
#include <Modloader/app/structs/RuntimeLicenseContext__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeLicenseContext__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeLicenseContext_DEFINED
struct RuntimeLicenseContext__Class;
struct RuntimeLicenseContext {
    struct RuntimeLicenseContext__Class* klass;
    MonitorData* monitor;
    struct RuntimeLicenseContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeLicenseContext_FWDDECL)
#define IL2CPP_STRUCT_RuntimeLicenseContext_FWDDECL
#include <Modloader/app/structs/RuntimeLicenseContext__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeLicenseContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeLicenseContext_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeLicenseContext_FWDDECL)
#include <Modloader/app/structs/RuntimeLicenseContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeLicenseContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
