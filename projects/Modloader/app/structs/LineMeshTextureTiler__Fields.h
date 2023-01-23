#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineMeshTextureTiler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineMeshTextureTiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineMeshTextureTiler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_UberShaderProperty_Texture__Enum_DEFINED)
#define IL2CPP_STRUCT_LineMeshTextureTiler__Fields_DEFINED
struct LineMesh;
struct Renderer;
struct LineMeshTextureTiler__Fields {
    struct MonoBehaviour__Fields _;
    struct LineMesh* m_lineMesh;
    struct Renderer* m_renderer;
    struct Vector2 m_scale;
    UberShaderProperty_Texture__Enum Texture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineMeshTextureTiler__Fields_FWDDECL)
#define IL2CPP_STRUCT_LineMeshTextureTiler__Fields_FWDDECL
#include <Modloader/app/structs/LineMesh.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_LineMeshTextureTiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineMeshTextureTiler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LineMeshTextureTiler__Fields_FWDDECL)
#include <Modloader/app/structs/LineMeshTextureTiler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineMeshTextureTiler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
