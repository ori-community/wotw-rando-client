#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarmerSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarmerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmerSettings__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_UberSwarmerSettings__Fields_DEFINED
struct UberSwarmerSettings__Fields {
    struct ScriptableObject__Fields _;
    float SeparationWeight;
    float AlignmentWeight;
    float CohesionWeight;
    float WanderWeight;
    float ObstacleAvoidanceWeight;
    float GlobalPOIWeight;
    float Speed;
    float Acceleration;
    float MinSpeed;
    float MaxSpeed;
    float MaxSteer;
    float NeighbourRadiusAlignment;
    float NeighbourRadiusCohesion;
    float DesiredSeparation;
    float MaxObstacleLookupDistance;
    float MaxObstacleLookupDistance45;
    float MaxObstacleLookupDistance90;
    float DistanceWeightThreshold;
    float WanderCircleRadius;
    float WanderCircleOffset;
    float WanderRateInDegrees;
    float NoiseForce;
    float NoiseFrequency;
    struct LayerMask RaycastLayerMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSwarmerSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberSwarmerSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberSwarmerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmerSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarmerSettings__Fields_FWDDECL)
#include <Modloader/app/structs/UberSwarmerSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarmerSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
