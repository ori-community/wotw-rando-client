#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrail__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrail__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MeshTrail__StaticFields_DEFINED
struct ComputeShader;
struct MeshTrail__StaticFields {
    bool DebugDisable;
    int32_t PropertyIdMaxVortexCount;
    int32_t PropertyId_TurbulenceCount_MaxVortexCount_TrailCount_ParticleCount;
    int32_t PropertyId_TotalParticleCount_MaxParticleCount_RandomSeed_EmitParticles;
    int32_t PropertyId_FaceCamera_FirstParticleIndex;
    int32_t PropertyId_CameraInheritedPositionDelta_CameraInheritedPositionDeltaLength;
    int32_t PropertyId_LocalToWorld;
    int32_t PropertyId_ObjectVelocity_DeltaTimeSinceLastEmission;
    int32_t PropertyId_AdditiveVelocity_DeltaTime;
    int32_t PropertyId_AdditiveVortexVelocity_Duration;
    int32_t PropertyIdEmitters;
    int32_t PropertyIdParticles;
    int32_t PropertyIdVortices;
    int32_t PropertyIdTurbulences;
    int32_t PropertyIdSkinningMatrices;
    int32_t PropertyIdTrailState;
    int32_t PropertyIdEmitParticles;
    int32_t PropertyIdMeshTrailRenderAsQuads;
    int32_t PropertyIdMeshTrailMaxParticleCount;
    int32_t PropertyIdMeshTrailParticleCount;
    int32_t PropertyIdMeshTrailTrailCount;
    int32_t PropertyIdMeshTrailWidth;
    int32_t PropertyIdMeshTrailParticles;
    int32_t PropertyIdMeshTrailEmitters;
    int32_t PropertyIdMeshTrailState;
    int32_t PropertyIdMeshTrailBaseColorWeight;
    int32_t PropertyIdMeshTrailLifetimeAnimatedParameters;
    int32_t PropertyIdMeshTrailLifetimeAdditiveVelocityParameters;
    int32_t PropertyIdMeshTrailInitialSpeedAnimatedParameters;
    int32_t PropertyIdMeshTrailInitialSpeedAnimatedParametersMax;
    int32_t PropertyIdMeshTrailDistanceAnimatedParameters;
    int32_t PropertyIdMeshTrailDistanceAnimatedParametersMax;
    int32_t PropertyIdMeshTrailBaseColorTex;
    struct ComputeShader* m_computeShader;
};
#endif
#if !defined(IL2CPP_STRUCT_MeshTrail__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MeshTrail__StaticFields_FWDDECL
#include <Modloader/app/structs/ComputeShader.h>
#endif
#undef IL2CPP_STRUCT_MeshTrail__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrail__StaticFields_FWDDECL)
#include <Modloader/app/structs/MeshTrail__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrail__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
