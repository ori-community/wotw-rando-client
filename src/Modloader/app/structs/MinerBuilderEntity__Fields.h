#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerBuilderEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerBuilderEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerBuilderEntity__Fields_DEFINED
struct AnimationPostprocess;
struct GroundEntityLocomotion;
struct IKLookPostprocess;
struct MultiTimelineFloatValueMin;
struct Transform;
struct MinerBuilderEntity__Fields {
    struct EnemyEntity__Fields _;
    bool dialogStarted;
    struct AnimationPostprocess* hitReactionFront;
    struct AnimationPostprocess* hitReactionBack;
    struct GroundEntityLocomotion* m_groundLocomotion;
    struct AnimationPostprocess* m_lastRanHitReaction;
    struct IKLookPostprocess* lookPostprocess;
    struct MultiTimelineFloatValueMin* lookPostprocessMinWeight;
    struct Transform* faceCameraRotationTransform;
    float cameraFaceLerpCoeff;
    float rotateTowardsCaracterWhenNotFacing;
    float m_faceCameraAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerBuilderEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerBuilderEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/IKLookPostprocess.h>
#include <Modloader/app/structs/MultiTimelineFloatValueMin.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MinerBuilderEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerBuilderEntity__Fields_FWDDECL)
#include <Modloader/app/structs/MinerBuilderEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerBuilderEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
