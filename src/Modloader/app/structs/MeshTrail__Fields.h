#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED)
#define IL2CPP_STRUCT_MeshTrail__Fields_DEFINED
struct SkinnedMeshRenderer;
struct MeshFilter;
struct Material;
struct Texture2D;
struct MeshTrail_MeshTrailTurbulence__Array;
struct Renderer;
struct AnimationCurve;
struct Transform__Array;
struct Matrix4x4__Array;
struct Mesh;
struct List_1_MeshTrail_MeshTrailEmitter_;
struct Vector3__Array;
struct ComputeBuffer;
struct MaterialPropertyBlock;
struct MeshTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct SkinnedMeshRenderer* SourceSkinnedMesh;
    struct MeshFilter* SourceMesh;
    struct Material* Material;
    struct Texture2D* DensityTexture;
    bool InverseDensityTexture;
    float Width;
    int32_t SubSampling;
    int32_t TrailCount;
    int32_t MaxParticleCount;
    int32_t ParticlesPerSecond;
    float Duration;
    struct Vector3 AdditiveVelocity;
    struct Vector3 AdditiveVortexVelocity;
    float CameraVelocityInheritance;
    struct MeshTrail_MeshTrailTurbulence__Array* Turbulences;
    float TeleportationThreshold;
    bool EnableBaseColor;
    struct Texture2D* BaseColorTexture;
    bool RenderAsQuads;
    bool DebugDrawParticles;
    bool DebugDrawVortices;
    bool FaceCamera;
    bool UseXCoordToScaleEmitterDistribution;
    struct Vector3 EmitterMaxDistance;
    struct Vector3 AdditionalWorldBoundsExtents;
    struct Renderer* Renderer;
    struct AnimationCurve* ScaleOverLifetime;
    struct AnimationCurve* OpacityOverLifetime;
    struct AnimationCurve* ColorSaturationOverLifetime;
    struct AnimationCurve* InitialSpeedToOpacity;
    struct AnimationCurve* DistanceToOpacity;
    struct AnimationCurve* AdditiveVelocityXCurve;
    struct AnimationCurve* AdditiveVelocityYCurve;
    struct AnimationCurve* AdditiveVelocityZCurve;
    struct Transform__Array* m_bones;
    struct Matrix4x4__Array* m_bindPoses;
    struct Mesh* m_mesh;
    struct Material* m_visualizerMaterial;
    struct MeshFilter* m_meshFilter;
    struct Mesh* m_renderMesh;
    struct Mesh* m_precomputedRenderMesh;
    struct MeshFilter* m_prefetchedMeshFilter;
    bool m_initialized;
    int32_t m_effectiveTrailCount;
    int32_t m_effectiveMaxParticleCount;
    int32_t m_totalParticleCount;
    struct List_1_MeshTrail_MeshTrailEmitter_* m_emitters;
    int32_t m_step1EmitNewParticlesComputeKernelId;
    int32_t m_step1UpdateParticlesComputeKernelId;
    int32_t m_step2ComputeKernelId;
    int32_t m_step3ComputeKernelId;
    int32_t m_clearStateComputeKernelId;
    int32_t m_clearParticlesComputeKernelId;
    int32_t m_clearVorticesComputeKernelId;
    int32_t m_maxVorticesCount;
    int32_t m_particleCount;
    int32_t m_firstParticleIndex;
    int32_t m_SavedParticlesCount;
    bool m_CanRestoreParticlesCount;
    bool m_clear;
    float m_initialSpeedAnimatedParametersMaxSpeed;
    float m_distanceAnimatedParametersMaxDistance;
    struct Texture2D* m_lifetimeAnimatedParametersTexture;
    struct Texture2D* m_initialSpeedAnimatedParametersTexture;
    struct Texture2D* m_lifetimeAdditiveVelocityTexture;
    struct Texture2D* m_distanceAnimatedParametersTexture;
    struct Matrix4x4__Array* m_skinningMatricesBufferData;
    bool m_runtimeInitialized;
    int32_t m_frameIdOfLastSimulationUpdate;
    struct Vector3 m_previousPosition;
    struct Nullable_1_UnityEngine_Vector3_ m_previousCameraPosition;
    float m_timeToEmitParticles;
    float m_teleportationThresholdSq;
    struct Vector3__Array* m_positionHistoryBuffer;
    int32_t m_positionHistoryBufferPointer;
    int32_t m_positionHistoryBufferCount;
    float m_rotationInvariantBoundsExtents;
    struct Texture2D* m_precomputedLifetimeAnimatedParametersTexture;
    struct Texture2D* m_precomputedInitialSpeedAnimatedParametersTexture;
    struct Texture2D* m_precomputedLifetimeAdditiveVelocityTexture;
    struct Texture2D* m_precomputedDistanceAnimatedParametersTexture;
    struct ComputeBuffer* m_emittersBuffer;
    struct ComputeBuffer* m_skinningMatricesBuffer;
    struct ComputeBuffer* m_particlesBuffer;
    struct ComputeBuffer* m_meshTrailStateBuffer;
    struct ComputeBuffer* m_turbulencesBuffer;
    struct ComputeBuffer* m_vorticesBuffer;
    struct ComputeBuffer* m_vorticesBufferStub;
    struct MaterialPropertyBlock* m_materialPropertyBlock;
    struct MaterialPropertyBlock* m_customMaterialPropertyBlock;
    bool _IsSuspended_k__BackingField;
    float m_timelineDeltaTime;
    float m_previousTimelineSampleTime;
    bool m_timelineWasInPreview;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrail__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeshTrail__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/List_1_MeshTrail_MeshTrailEmitter_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#include <Modloader/app/structs/Matrix4x4__Array.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence__Array.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_MeshTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrail__Fields_FWDDECL)
#include <Modloader/app/structs/MeshTrail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
