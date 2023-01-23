#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkLegPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkLegPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkLegPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IkLegPostprocess__Fields_DEFINED
struct Transform;
struct LimbIK;
struct IkLegPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct Transform* Root;
    float GroundDetectionSphereRadius;
    float GroundDetectionRange;
    float FootRotationAlignmentRange;
    float MaxIkOffsetChangeSpeed;
    float RestingFootHeight;
    struct LayerMask GroundDetectionLayerMask;
    struct Vector3 EndPointLocalSpaceNormal;
    struct LimbIK* m_solver;
    float m_currentIkOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkLegPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_IkLegPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/LimbIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IkLegPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkLegPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IkLegPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/IkLegPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkLegPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
