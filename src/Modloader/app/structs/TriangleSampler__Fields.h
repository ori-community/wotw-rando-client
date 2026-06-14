#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleSampler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleSampler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleSampler__Fields_DEFINED)
#define IL2CPP_STRUCT_TriangleSampler__Fields_DEFINED
struct Random;
struct Mesh_1;
struct __declspec(align(8)) TriangleSampler__Fields {
    struct Random* random;
    struct Mesh_1* mesh;
    int32_t samples;
    int32_t triangleCount;
};
#endif
#if !defined(IL2CPP_STRUCT_TriangleSampler__Fields_FWDDECL)
#define IL2CPP_STRUCT_TriangleSampler__Fields_FWDDECL
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/Random.h>
#endif
#undef IL2CPP_STRUCT_TriangleSampler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleSampler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TriangleSampler__Fields_FWDDECL)
#include <Modloader/app/structs/TriangleSampler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleSampler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
