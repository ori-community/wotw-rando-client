#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseContext_DEFINED)
#define IL2CPP_STRUCT_LicenseContext_DEFINED
struct LicenseContext__Class;
struct LicenseContext {
    struct LicenseContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LicenseContext_FWDDECL)
#define IL2CPP_STRUCT_LicenseContext_FWDDECL
#include <Modloader/app/structs/LicenseContext__Class.h>
#endif
#undef IL2CPP_STRUCT_LicenseContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseContext_DEFINED) && !defined(IL2CPP_STRUCT_LicenseContext_FWDDECL)
#include <Modloader/app/structs/LicenseContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
