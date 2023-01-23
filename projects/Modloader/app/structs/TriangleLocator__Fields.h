#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleLocator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleLocator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleLocator__Fields_DEFINED)
#include <Modloader/app/structs/Otri.h>
#if defined(IL2CPP_STRUCT_Otri_DEFINED)
#define IL2CPP_STRUCT_TriangleLocator__Fields_DEFINED
struct TriangleSampler;
struct Mesh_1;
struct IPredicates;
struct __declspec(align(8)) TriangleLocator__Fields {
    struct TriangleSampler* sampler;
    struct Mesh_1* mesh;
    struct IPredicates* predicates;
    struct Otri recenttri;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriangleLocator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TriangleLocator__Fields_FWDDECL
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/TriangleSampler.h>
#endif
#undef IL2CPP_STRUCT_TriangleLocator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleLocator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TriangleLocator__Fields_FWDDECL)
#include <Modloader/app/structs/TriangleLocator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleLocator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
