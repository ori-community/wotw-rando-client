#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKLimb__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKLimb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLimb__Fields_DEFINED)
#include <Modloader/app/structs/IKPostprocess__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_IKLimb__Fields_DEFINED
struct IkChainSolver;
struct IKLimb__Fields {
    struct IKPostprocess__Fields _;
    float Radius;
    struct Vector3 Anchor;
    struct Vector3 RaycastAxis;
    float InnerDistance;
    float OuterDistance;
    float GroundHigh;
    float GroundTarget;
    float GroundLow;
    struct LayerMask LayerMask;
    bool Raycast3D;
    float AlignFootToGround;
    bool UseOptimizedSolver;
    float OptimizedSolverTolerance;
    int32_t m_layer_mask;
    struct IkChainSolver* m_ikChainSolver;
    struct Vector3 m_groundNormal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKLimb__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKLimb__Fields_FWDDECL
#include <Modloader/app/structs/IkChainSolver.h>
#endif
#undef IL2CPP_STRUCT_IKLimb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLimb__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKLimb__Fields_FWDDECL)
#include <Modloader/app/structs/IKLimb__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKLimb__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
