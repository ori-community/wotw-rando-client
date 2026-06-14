#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_BrushPreview__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_BrushPreview__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_BrushPreview__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_BrushPreview__Fields_DEFINED
struct MeshRenderer;
struct MeshFilter;
struct Material;
struct Material__Array;
struct P3D_BrushPreview__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer* meshRenderer;
    struct MeshFilter* meshFilter;
    struct Material* material;
    int32_t age;
    struct Material__Array* materials;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_BrushPreview__Fields_FWDDECL)
#define IL2CPP_STRUCT_P3D_BrushPreview__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Material__Array.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/MeshRenderer.h>
#endif
#undef IL2CPP_STRUCT_P3D_BrushPreview__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_BrushPreview__Fields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_BrushPreview__Fields_FWDDECL)
#include <Modloader/app/structs/P3D_BrushPreview__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_BrushPreview__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
