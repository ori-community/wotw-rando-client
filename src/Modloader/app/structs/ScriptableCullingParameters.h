#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScriptableCullingParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScriptableCullingParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptableCullingParameters_DEFINED)
#include <Modloader/app/structs/CameraProperties.h>
#include <Modloader/app/structs/CullFlag__Enum.h>
#include <Modloader/app/structs/LODParameters.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/ReflectionProbeSortOptions__Enum.h>
#include <Modloader/app/structs/RendererCullingParameters.h>
#include <Modloader/app/structs/ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9.h>
#include <Modloader/app/structs/ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LODParameters_DEFINED) && defined(IL2CPP_STRUCT_ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9_DEFINED) && defined(IL2CPP_STRUCT_ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_CullFlag__Enum_DEFINED) && defined(IL2CPP_STRUCT_ReflectionProbeSortOptions__Enum_DEFINED) && defined(IL2CPP_STRUCT_CameraProperties_DEFINED) && defined(IL2CPP_STRUCT_RendererCullingParameters_DEFINED)
#define IL2CPP_STRUCT_ScriptableCullingParameters_DEFINED
struct ScriptableCullingParameters {
    int32_t m_IsOrthographic;
    struct LODParameters m_LodParameters;
    struct ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9 m_CullingPlanes;
    int32_t m_CullingPlaneCount;
    int32_t m_CullingMask;
    int32_t m_NoCullingMask;
    int64_t m_SceneMask;
    struct ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10 m_LayerFarCullDistances;
    int32_t m_LayerCull;
    struct Matrix4x4 m_CullingMatrix;
    struct Vector3 m_Position;
    float m_shadowDistance;
    CullFlag__Enum m_CullingFlags;

    ReflectionProbeSortOptions__Enum m_ReflectionProbeSortOptions;

    struct CameraProperties m_CameraProperties;
    float m_AccurateoOcclusionThreshold;
    struct Matrix4x4 cullStereoView;
    struct Matrix4x4 cullStereoProj;
    float cullStereoSeparation;
    int32_t padding2;
    struct RendererCullingParameters rendererCulling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScriptableCullingParameters_FWDDECL)
#define IL2CPP_STRUCT_ScriptableCullingParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScriptableCullingParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptableCullingParameters_DEFINED) && !defined(IL2CPP_STRUCT_ScriptableCullingParameters_FWDDECL)
#include <Modloader/app/structs/ScriptableCullingParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScriptableCullingParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
