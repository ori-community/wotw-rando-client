#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/MoonTrail_TwoTargetsFolowMode__Enum.h>
#include <Modloader/app/structs/MoonTrail_UVMode__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonTrail_TwoTargetsFolowMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonTrail_UVMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_MoonTrail__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct AnimationCurve;
struct Gradient;
struct MonoBehaviour;
struct CatmullSpline;
struct Vector3__Array;
struct MoonTrail_MoonTrailParticle__Array;
struct Color__Array;
struct TrailPathProvider;
struct List_1_Moon_MoonTrail_SimulationFrameData_;
struct Renderer;
struct MeshFilter;
struct MaterialPropertyBlock;
struct IMaterialPropertyBlockProvider;
struct Camera;
struct MoonTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* Target;
    struct MoonReference_1_UnityEngine_Transform_* SecondaryTarget;
    MoonTrail_TwoTargetsFolowMode__Enum TwoTargetsMode;

    int32_t TightFollowTangentSmoothness;
    MoonTrail_UVMode__Enum UVMappingMode;

    int32_t AmountOfDynamicParticles;
    bool Emit;
    float InitialThickness;
    struct Color InitialColor;
    bool EmitAtStart;
    float Resolution;
    float Lifetime;
    float NormalInterpolationSpeed;
    bool UseThicknessOverTime;
    struct AnimationCurve* ThicknessOverTime;
    bool UseColorOverTime;
    struct Gradient* AlphaOverTime;
    struct Gradient* AuxiliaryAOverTime;
    struct Gradient* AuxiliaryBOverTime;
    bool FlattenVerticesForUvInterpolation;
    struct MonoBehaviour* BakedPathProviderSourceFirstTarget;
    struct MonoBehaviour* BakedPathProviderSourceSecondTarget;
    float PathSampleInterval;
    bool Force2DNormals;
    bool FollowTransform;
    bool Debug;
    bool TimelineEditorEmit;
    float m_splineBendAmount;
    float m_splineBendSpeed;
    struct CatmullSpline* m_spline;
    float m_minDistanceSqr;
    float m_minDistance;
    struct Vector3__Array* m_controlPoints;
    bool m_hasControlPoints;
    struct Vector3 m_previusTargetPosition;
    struct Vector3 m_targetDelta;
    struct Vector3 m_targetSpeed;
    struct Vector3 m_lastNonZeroDelta;
    struct Vector3 m_lastEmissionTargetPosition;
    struct Vector3 m_originalTransformPosition;
    struct Vector3 m_transformDelta;
    bool m_wasEmiting;
    float m_randomOffset;
    struct MoonTrail_MoonTrailParticle__Array* m_trailParticlesBuffer;
    int32_t m_trailParticlesBufferIdx0;
    int32_t m_trailParticlesBufferIdx1;
    struct Color__Array* m_rasterizedGradients;
    bool m_useRasterizedGradients;
    struct Vector3 m_lastControllPointOffset;
    float m_uvStep;
    float m_trailLenght;
    struct TrailPathProvider* m_firstTargetPathProvider;
    struct TrailPathProvider* m_secondTargetPathProvider;
    float m_pathProviderTimer;
    struct List_1_Moon_MoonTrail_SimulationFrameData_* m_simulationFrames;
    int32_t m_simulationFrameIndex;
    struct Renderer* m_renderer;
    struct MeshFilter* m_meshFilter;
    struct MaterialPropertyBlock* m_materialPropertyBlock;
    struct Bounds m_localRotationInvariantBounds;
    struct IMaterialPropertyBlockProvider* m_materialPropertyBlockProvider;
    struct Bounds _Bounds_k__BackingField;
    bool _IsSuspended_k__BackingField;
    int32_t _FramesToSkip_k__BackingField;
    struct Camera* m_camera;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrail__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTrail__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CatmullSpline.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/IMaterialPropertyBlockProvider.h>
#include <Modloader/app/structs/List_1_Moon_MoonTrail_SimulationFrameData_.h>
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Array.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/TrailPathProvider.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrail__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTrail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
