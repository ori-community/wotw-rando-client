#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointLightMaskModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointLightMaskModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointLightMaskModifier__Fields_DEFINED)
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LightPriority_Layer__Enum_DEFINED)
#define IL2CPP_STRUCT_PointLightMaskModifier__Fields_DEFINED
struct UberShaderVector;
struct AnimationCurve;
struct Renderer;
struct MeshFilter;
struct PointLightMaskModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderVector* LightParams;
    struct AnimationCurve* FalloffCurve;
    struct UberShaderVector* FalloffNear;
    struct UberShaderVector* FalloffFar;
    bool UseCustomLightBandsDepths;
    struct UberShaderVector* CustomLightBandsDepths;
    struct UberShaderVector* LightBandsIntensities;
    struct UberShaderVector* DirectionalLight;
    struct Vector3 LightCenter;
    struct UberShaderVector* LocalLightCenter;
    struct UberShaderVector* AffectedObjTypes_Offset_Hardness_Darkening;
    struct UberShaderVector* ErasingWeight_Priority_DarkeningLightMaskInfluence_Intensity3D;
    LightPriority_Layer__Enum Layer;

    int32_t DarkeningErasingPriority;
    int32_t CullingPriority;
    float LayerInfluenceMultiplier;
    float _CullingScore_k__BackingField;
    struct Renderer* m_cachedRendererLocal;
    struct MeshFilter* m_meshFilterLocal;
    bool m_componentsCachedOnBuild;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointLightMaskModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointLightMaskModifier__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_PointLightMaskModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointLightMaskModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointLightMaskModifier__Fields_FWDDECL)
#include <Modloader/app/structs/PointLightMaskModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointLightMaskModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
