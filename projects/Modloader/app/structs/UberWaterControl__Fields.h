#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterControl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterControl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberWaterControl_BoundsType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED) && defined(IL2CPP_STRUCT_UberWaterControl_BoundsType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_UberWaterControl__Fields_DEFINED
struct AnimationCurve;
struct Texture2D;
struct GameObject;
struct Shader;
struct Material;
struct RenderTexture;
struct Queue_1_UberWaterControl_ImpactBuf___Array;
struct UberWaterTop;
struct MeshFilter;
struct Transform;
struct Renderer;
struct UberWaterControl__Fields {
    struct MonoBehaviour__Fields _;
    float Damping;
    float Elasticity;
    float WaveSpeed;
    float ForceRaisePower;
    float MaxWaveHeight;
    float WaveHeightScale;
    float WaterlineRaisePower;
    float NoiseStrength;
    float NoiseSpeed;
    float NoiseScale;
    float VerticesPerMeterWaveline;
    float RainFrequency;
    float RainPower;
    float ZScale;
    float TessDamping;
    float TessElasticity;
    float TessWaveSpeed;
    float DirectionXMultiplier;
    float DirectionYMultiplier;
    struct AnimationCurve* RainPowerSpread;
    float RainRadius;
    float RaindRadiusSpread;
    struct Texture2D* NoiseTexture;
    bool RenderReflections;
    bool ReflectionBlur;
    float ReflectionBlurSize;
    struct GameObject* SplashPrefab;
    float SplashSpawnAtPower;
    bool CrossSection;
    float ExtendFront;
    float ExtendBack;
    float ExtendLeft;
    float ExtendRight;
    float WaterlineSimDepth;
    bool UseHighRes;
    bool EnableSimulation;
    bool WriteMapAsGlobalShaderTexture;
    struct Shader* SeinWaterUpdateShader;
    struct Shader* SeinWaterBlurShader;
    struct Material* TopMaterial;
    struct Material* CrossMaterial;
    struct Material* EdgeMaterial;
    bool DoSim;
    bool UseDisplacement;
    bool ExcludeFromSurfaceDistanceChecks;
    bool AllowSplashes;
    bool m_timelineUpdate;
    struct Vector3 m_oldScale;
    int32_t m_resolutionX;
    int32_t m_resolutionY;
    RenderTextureFormat__Enum m_fmt;

    float m_rainToDo;
    struct Material* m_waterMat1;
    struct Material* m_waterMat2;
    struct RenderTexture* m_waterHeight;
    struct RenderTexture* m_waterHeightDraw;
    struct Queue_1_UberWaterControl_ImpactBuf___Array* m_impacts;
    struct Queue_1_UberWaterControl_ImpactBuf___Array* m_impactsTess;
    float m_lastTime;
    float m_prevDeltTime;
    struct Material* m_blurMaterial;
    float m_simTime;
    bool m_visualDebugRegistered;
    struct UberWaterTop* m_topPlaneReflection;
    struct MeshFilter* m_topPlaneMeshFilter;
    struct Transform* transform;
    int32_t _IInteractable_Index_k__BackingField;
    bool _IInteractable_IsRegistered_k__BackingField;
    struct Vector3 BoundaryPaddingMin;
    struct Vector3 BoundaryPaddingMax;
    UberWaterControl_BoundsType__Enum m_BoundsType;

    struct Bounds m_Bounds;
    struct Bounds m_BoundsInteraction;
    struct Renderer* m_topPlaneRenderer;
    bool m_awakeCalled;
    bool m_registered;
    bool m_insideFrustum;
    SuspendableMask__Enum _Moon_ISuspendable_Mask_k__BackingField;

    bool _Moon_ISuspendable_IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterControl__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterControl__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Queue_1_UberWaterControl_ImpactBuf___Array.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberWaterTop.h>
#endif
#undef IL2CPP_STRUCT_UberWaterControl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterControl__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterControl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterControl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
