#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GravityToGroundSurface_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GravityToGroundSurface_INITIALIZING
#if !defined(IL2CPP_STRUCT_GravityToGroundSurface_DEFINED)
#include <Modloader/app/structs/GravityToGroundSurface__Fields.h>
#if defined(IL2CPP_STRUCT_GravityToGroundSurface__Fields_DEFINED)
#define IL2CPP_STRUCT_GravityToGroundSurface_DEFINED
struct GravityToGroundSurface__Class;
struct GravityToGroundSurface {
    struct GravityToGroundSurface__Class* klass;
    MonitorData* monitor;
    struct GravityToGroundSurface__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GravityToGroundSurface_FWDDECL)
#define IL2CPP_STRUCT_GravityToGroundSurface_FWDDECL
#include <Modloader/app/structs/GravityToGroundSurface__Class.h>
#endif
#undef IL2CPP_STRUCT_GravityToGroundSurface_INITIALIZING
#if !defined(IL2CPP_STRUCT_GravityToGroundSurface_DEFINED) && !defined(IL2CPP_STRUCT_GravityToGroundSurface_FWDDECL)
#include <Modloader/app/structs/GravityToGroundSurface.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GravityToGroundSurface.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
