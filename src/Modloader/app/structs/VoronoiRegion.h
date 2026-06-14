#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VoronoiRegion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VoronoiRegion_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiRegion_DEFINED)
#include <Modloader/app/structs/VoronoiRegion__Fields.h>
#if defined(IL2CPP_STRUCT_VoronoiRegion__Fields_DEFINED)
#define IL2CPP_STRUCT_VoronoiRegion_DEFINED
struct VoronoiRegion__Class;
struct VoronoiRegion {
    struct VoronoiRegion__Class* klass;
    MonitorData* monitor;
    struct VoronoiRegion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VoronoiRegion_FWDDECL)
#define IL2CPP_STRUCT_VoronoiRegion_FWDDECL
#include <Modloader/app/structs/VoronoiRegion__Class.h>
#endif
#undef IL2CPP_STRUCT_VoronoiRegion_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiRegion_DEFINED) && !defined(IL2CPP_STRUCT_VoronoiRegion_FWDDECL)
#include <Modloader/app/structs/VoronoiRegion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VoronoiRegion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
