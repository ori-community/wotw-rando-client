#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaballRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaballRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballRenderer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MetaballRenderer__Fields_DEFINED
struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball_;
struct MetaballRenderer_GridSample__Array;
struct Vector3__Array;
struct Int32__Array;
struct Mesh;
struct Transform;
struct List_1_Metaballs2D_MetaballRenderer_IMetaball_;
struct MetaballRenderer__Fields {
    struct MonoBehaviour__Fields _;
    float ZFactor;
    struct Rect Bounds;
    int32_t Resolution;
    struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball_* TransformMetaballs;
    struct Vector2 GridResolution;
    float EnergyConservation;
    float BallCollisionPadding;
    struct MetaballRenderer_GridSample__Array* m_grid;
    struct Vector2 m_cellSize;
    struct Vector3__Array* m_vertices;
    struct Int32__Array* m_triangles;
    struct Mesh* m_mesh;
    int32_t m_verticesLength;
    int32_t m_trianglesLength;
    struct Transform* m_transform;
    struct List_1_Metaballs2D_MetaballRenderer_IMetaball_* m_metaBalls;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MetaballRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MetaballRenderer__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_Metaballs2D_MetaballRenderer_IMetaball_.h>
#include <Modloader/app/structs/List_1_Metaballs2D_MetaballRenderer_TransformMetaball_.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MetaballRenderer_GridSample__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_MetaballRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MetaballRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/MetaballRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaballRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
