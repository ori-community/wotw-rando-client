#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoundedVoronoi_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoundedVoronoi_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoundedVoronoi_DEFINED)
#include <Modloader/app/structs/BoundedVoronoi__Fields.h>
#if defined(IL2CPP_STRUCT_BoundedVoronoi__Fields_DEFINED)
#define IL2CPP_STRUCT_BoundedVoronoi_DEFINED
struct BoundedVoronoi__Class;
struct BoundedVoronoi {
    struct BoundedVoronoi__Class* klass;
    MonitorData* monitor;
    struct BoundedVoronoi__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoundedVoronoi_FWDDECL)
#define IL2CPP_STRUCT_BoundedVoronoi_FWDDECL
#include <Modloader/app/structs/BoundedVoronoi__Class.h>
#endif
#undef IL2CPP_STRUCT_BoundedVoronoi_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoundedVoronoi_DEFINED) && !defined(IL2CPP_STRUCT_BoundedVoronoi_FWDDECL)
#include <Modloader/app/structs/BoundedVoronoi.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoundedVoronoi.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
