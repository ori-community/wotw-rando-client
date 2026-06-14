#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPoisonCloud__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPoisonCloud__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_WaterPoisonCloud__Fields_DEFINED
struct DamageOwner;
struct Mesh;
struct List_1_UnityEngine_Vector3_;
struct List_1_UnityEngine_Color_;
struct List_1_System_Int32_;
struct List_1_WaterPoisonCloud_Blob_;
struct WaterPoisonCloud__Fields {
    struct MonoBehaviour__Fields _;
    bool ClipToWaterZone;
    bool ClipUVsToWaterZone;
    float BlobSizeMultiplierForDamage;
    float DamageAmound;
    float DamageKickbackForce;
    DamageType__Enum DamageType;

    struct DamageOwner* Owner;
    AbilityType__Enum AbilityType;

    DamageWeight__Enum DamageWeight;

    bool DebugDrawDamageZones;
    struct Color DebugDamageZoneColor;
    struct Color DebugDamageZoneOutlineColor;
    struct Mesh* m_mesh;
    struct List_1_UnityEngine_Vector3_* m_vertices;
    struct List_1_UnityEngine_Vector3_* m_normals;
    struct List_1_UnityEngine_Vector3_* m_uvs;
    struct List_1_UnityEngine_Color_* m_colors;
    struct List_1_System_Int32_* m_triangles;
    struct List_1_WaterPoisonCloud_Blob_* m_blobs;
    struct Vector3 m_vertexCache0;
    struct Vector3 m_vertexCache1;
    struct Vector3 m_vertexCache2;
    struct Vector3 m_vertexCache3;
    struct Vector2 m_uvUpperLeftCache;
    struct Vector2 m_uvLowerRightCache;
    struct Vector3 m_boundMin;
    struct Vector3 m_boundMax;
    bool m_destroyOnCleared;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterPoisonCloud__Fields_FWDDECL
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_WaterPoisonCloud_Blob_.h>
#include <Modloader/app/structs/Mesh.h>
#endif
#undef IL2CPP_STRUCT_WaterPoisonCloud__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterPoisonCloud__Fields_FWDDECL)
#include <Modloader/app/structs/WaterPoisonCloud__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPoisonCloud__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
