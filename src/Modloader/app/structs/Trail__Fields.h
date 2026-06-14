#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Trail_TrailAlignment__Enum.h>
#include <Modloader/app/structs/Trail_TrailMode__Enum.h>
#include <Modloader/app/structs/Trail_TrailTextureMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Trail_TrailAlignment__Enum_DEFINED) && defined(IL2CPP_STRUCT_Trail_TrailMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Trail_TrailTextureMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_Trail__Fields_DEFINED
struct Material;
struct MoonReference_1_UnityEngine_Transform_;
struct AnimationCurve;
struct Gradient;
struct List_1_Moon_Trail_Point_;
struct List_1_System_Int32_;
struct Mesh;
struct List_1_UnityEngine_Vector3_;
struct List_1_UnityEngine_Vector4_;
struct List_1_UnityEngine_Vector2_;
struct List_1_UnityEngine_Color_;
struct MeshRenderer;
struct Trail__Fields {
    struct MonoBehaviour__Fields _;
    Trail_TrailAlignment__Enum Alignment;

    Trail_TrailMode__Enum Mode;

    bool Emit;
    bool TimelineEditorEmit;
    float Thickness;
    int32_t Smoothness;
    struct Material* MaterialOverride;
    struct MoonReference_1_UnityEngine_Transform_* FirstTransformRef;
    struct MoonReference_1_UnityEngine_Transform_* SecondTransformRef;
    Trail_TrailTextureMode__Enum TextureMode;

    float UvFactor;
    float TileAnchor;
    float InitialThickness;
    struct Color InitialColor;
    float MinDistance;
    float Duration;
    struct AnimationCurve* ThicknessOverTime;
    struct Gradient* ColorOverTime;
    struct AnimationCurve* ThicknessOverLenght;
    struct Gradient* ColorOverLenght;
    bool Debug;
    struct List_1_Moon_Trail_Point_* m_points;
    struct List_1_Moon_Trail_Point_* m_renderablePoints;
    struct List_1_System_Int32_* m_discontinuities;
    struct Mesh* m_mesh;
    struct List_1_UnityEngine_Vector3_* m_vertices;
    struct List_1_UnityEngine_Vector3_* m_normals;
    struct List_1_UnityEngine_Vector4_* m_tangents;
    struct List_1_UnityEngine_Vector2_* m_uvs;
    struct List_1_System_Int32_* m_tris;
    struct List_1_UnityEngine_Color_* m_vertColors;
    struct MeshRenderer* m_meshRenderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trail__Fields_FWDDECL)
#define IL2CPP_STRUCT_Trail__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/List_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_Trail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Trail__Fields_FWDDECL)
#include <Modloader/app/structs/Trail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
