#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageTextureMaker__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageTextureMaker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageTextureMaker__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CageTextureMaker__StaticFields_DEFINED
struct Material;
struct Mesh;
struct CageTextureMaker__StaticFields {
    struct Material* s_baseMaterial;
    struct Material* s_strokeMaterial;
    struct Mesh* s_quadMesh;
};
#endif
#if !defined(IL2CPP_STRUCT_CageTextureMaker__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CageTextureMaker__StaticFields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#endif
#undef IL2CPP_STRUCT_CageTextureMaker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageTextureMaker__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CageTextureMaker__StaticFields_FWDDECL)
#include <Modloader/app/structs/CageTextureMaker__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageTextureMaker__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
