#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSAiming_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSAiming_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSAiming_DEFINED)
#include <Modloader/app/structs/FPSAiming__Fields.h>
#if defined(IL2CPP_STRUCT_FPSAiming__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSAiming_DEFINED
struct FPSAiming__Class;
struct FPSAiming {
    struct FPSAiming__Class* klass;
    MonitorData* monitor;
    struct FPSAiming__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSAiming_FWDDECL)
#define IL2CPP_STRUCT_FPSAiming_FWDDECL
#include <Modloader/app/structs/FPSAiming__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSAiming_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSAiming_DEFINED) && !defined(IL2CPP_STRUCT_FPSAiming_FWDDECL)
#include <Modloader/app/structs/FPSAiming.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSAiming.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
