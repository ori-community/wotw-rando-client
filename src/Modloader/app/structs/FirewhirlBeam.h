#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FirewhirlBeam_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FirewhirlBeam_INITIALIZING
#if !defined(IL2CPP_STRUCT_FirewhirlBeam_DEFINED)
#include <Modloader/app/structs/FirewhirlBeam__Fields.h>
#if defined(IL2CPP_STRUCT_FirewhirlBeam__Fields_DEFINED)
#define IL2CPP_STRUCT_FirewhirlBeam_DEFINED
struct FirewhirlBeam__Class;
struct FirewhirlBeam {
    struct FirewhirlBeam__Class* klass;
    MonitorData* monitor;
    struct FirewhirlBeam__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FirewhirlBeam_FWDDECL)
#define IL2CPP_STRUCT_FirewhirlBeam_FWDDECL
#include <Modloader/app/structs/FirewhirlBeam__Class.h>
#endif
#undef IL2CPP_STRUCT_FirewhirlBeam_INITIALIZING
#if !defined(IL2CPP_STRUCT_FirewhirlBeam_DEFINED) && !defined(IL2CPP_STRUCT_FirewhirlBeam_FWDDECL)
#include <Modloader/app/structs/FirewhirlBeam.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FirewhirlBeam.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
