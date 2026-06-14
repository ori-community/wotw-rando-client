#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetSpheres_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetSpheres_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetSpheres_DEFINED)
#include <Modloader/app/structs/TargetSpheres__Fields.h>
#if defined(IL2CPP_STRUCT_TargetSpheres__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetSpheres_DEFINED
struct TargetSpheres__Class;
struct TargetSpheres {
    struct TargetSpheres__Class* klass;
    MonitorData* monitor;
    struct TargetSpheres__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetSpheres_FWDDECL)
#define IL2CPP_STRUCT_TargetSpheres_FWDDECL
#include <Modloader/app/structs/TargetSpheres__Class.h>
#endif
#undef IL2CPP_STRUCT_TargetSpheres_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetSpheres_DEFINED) && !defined(IL2CPP_STRUCT_TargetSpheres_FWDDECL)
#include <Modloader/app/structs/TargetSpheres.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetSpheres.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
