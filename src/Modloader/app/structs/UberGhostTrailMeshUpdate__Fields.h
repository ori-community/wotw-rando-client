#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_DEFINED)
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_DEFINED
struct Renderer;
struct GameObject;
struct Vector3__Array;
struct Vector2__Array;
struct Color32__Array;
struct Int32__Array__Array;
struct Material__Array;
struct Material__Array__Array;
struct UberGhostTrailMeshUpdate_Quad__Array;
struct Boolean__Array;
struct List_1_UberGhostTrailMeshUpdate_TextureUsage_;
struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_;
struct Mesh;
struct AnimationCurve;
struct UberGhostTrail;
struct MeshFilter;
struct UberGhostTrailMeshUpdate__Fields {
    struct MonoBehaviour__Fields _;
    struct Renderer* m_targetRenderer;
    struct GameObject* m_animatorTarget;
    struct Vector3__Array* m_vertices;
    struct Vector2__Array* m_uv2;
    struct Vector2__Array* m_mainUvs;
    struct Color32__Array* m_colors;
    struct Int32__Array__Array* m_triangles;
    struct Material__Array* m_materials;
    struct Material__Array__Array* m_setMaterials;
    struct UberGhostTrailMeshUpdate_Quad__Array* m_quads;
    struct Boolean__Array* m_active;
    struct List_1_UberGhostTrailMeshUpdate_TextureUsage_* m_textures;
    struct Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_* m_instToTex;
    struct Mesh* m_trailMesh;
    float m_lastTime;
    struct AnimationCurve* m_scaleCurve;
    struct AnimationCurve* m_alphaCurve;
    struct Color32 m_col;
    struct Vector2 m_constForce;
    struct Vector2 m_localConstForce;
    struct Vector2 m_startSpeed;
    struct Vector2 m_startRandomSpeed;
    struct Vector2 m_localStartSpeed;
    struct Vector2 m_localRandomStartSpeed;
    struct Quaternion m_lastRot;
    struct Vector4 m_atlasSettings;
    int32_t m_currentSize;
    int32_t m_materialSize;
    struct UberGhostTrail* GhostTarget;
    struct Renderer* m_renderer;
    struct MeshFilter* m_meshFilter;
    float m_destroyTime;
    bool m_targetIsSpriteAnim;
    int32_t m_updateCount;
    float m_lastZ;
    int32_t m_quadCount;
    int32_t m_lastIndex;
    float m_curTime;
    int32_t m_posFrame;
    bool _Visible_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UberGhostTrailMeshUpdate_TextureInfo_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/List_1_UberGhostTrailMeshUpdate_TextureUsage_.h>
#include <Modloader/app/structs/Material__Array.h>
#include <Modloader/app/structs/Material__Array__Array.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberGhostTrail.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_Quad__Array.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate__Fields_FWDDECL)
#include <Modloader/app/structs/UberGhostTrailMeshUpdate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGhostTrailMeshUpdate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
