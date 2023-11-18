#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoundedVoronoi__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoundedVoronoi__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoundedVoronoi__Fields_DEFINED)
#include <Modloader/app/structs/VoronoiBase__Fields.h>
#if defined(IL2CPP_STRUCT_VoronoiBase__Fields_DEFINED)
#define IL2CPP_STRUCT_BoundedVoronoi__Fields_DEFINED
struct BoundedVoronoi__Fields {
    struct VoronoiBase__Fields _;
    int32_t offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoundedVoronoi__Fields_FWDDECL)
#define IL2CPP_STRUCT_BoundedVoronoi__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BoundedVoronoi__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoundedVoronoi__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BoundedVoronoi__Fields_FWDDECL)
#include <Modloader/app/structs/BoundedVoronoi__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoundedVoronoi__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
