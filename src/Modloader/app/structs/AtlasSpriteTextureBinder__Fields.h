#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_DEFINED)
#include <Modloader/app/structs/UberScreenMode__Enum.h>
#if defined(IL2CPP_STRUCT_UberScreenMode__Enum_DEFINED)
#define IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_DEFINED
struct Vector3__Array;
struct Vector2__Array;
struct Int32__Array;
struct Mesh;
struct MeshFilter;
struct Atlas;
struct Renderer;
struct __declspec(align(8)) AtlasSpriteTextureBinder__Fields {
    struct Vector3__Array* m_vertices;
    struct Vector2__Array* m_uvs;
    struct Int32__Array* m_triangles;
    bool m_spriceSpaceuvs;
    struct Mesh* m_mesh;
    struct MeshFilter* m_lastFilter;
    int32_t m_frame;
    int32_t m_divX;
    int32_t m_divY;
    UberScreenMode__Enum m_lastMode;

    struct Atlas* m_lastAtlas;
    struct Renderer* m_lastRenderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_FWDDECL)
#define IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_FWDDECL
#include <Modloader/app/structs/Atlas.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AtlasSpriteTextureBinder__Fields_FWDDECL)
#include <Modloader/app/structs/AtlasSpriteTextureBinder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AtlasSpriteTextureBinder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
