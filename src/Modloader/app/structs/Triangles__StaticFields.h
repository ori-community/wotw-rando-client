#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Triangles__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Triangles__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangles__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Triangles__StaticFields_DEFINED
struct Mesh__Array;
struct Triangles__StaticFields {
    struct Mesh__Array* meshes;
    int32_t currentTris;
};
#endif
#if !defined(IL2CPP_STRUCT_Triangles__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Triangles__StaticFields_FWDDECL
#include <Modloader/app/structs/Mesh__Array.h>
#endif
#undef IL2CPP_STRUCT_Triangles__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangles__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Triangles__StaticFields_FWDDECL)
#include <Modloader/app/structs/Triangles__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Triangles__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
