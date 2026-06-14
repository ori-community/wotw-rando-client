#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserBeam_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserBeam_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserBeam_DEFINED)
#include <Modloader/app/structs/LaserBeam__Fields.h>
#if defined(IL2CPP_STRUCT_LaserBeam__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserBeam_DEFINED
struct LaserBeam__Class;
struct LaserBeam {
    struct LaserBeam__Class* klass;
    MonitorData* monitor;
    struct LaserBeam__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserBeam_FWDDECL)
#define IL2CPP_STRUCT_LaserBeam_FWDDECL
#include <Modloader/app/structs/LaserBeam__Class.h>
#endif
#undef IL2CPP_STRUCT_LaserBeam_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserBeam_DEFINED) && !defined(IL2CPP_STRUCT_LaserBeam_FWDDECL)
#include <Modloader/app/structs/LaserBeam.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserBeam.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
