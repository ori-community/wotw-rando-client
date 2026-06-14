#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_DEFINED
struct VerletStructure;
struct Transform;
struct AnimationCurve;
struct Int32__Array;
struct Single__Array;
struct VerletStructureAttachForceAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct VerletStructure* VerletStructure;
    struct Transform* AttachTransform;
    int32_t JointId;
    struct AnimationCurve* AnimationCurve;
    float m_time;
    struct Int32__Array* m_jointIndexes;
    struct Single__Array* m_originalForces;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletStructure.h>
#endif
#undef IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructureAttachForceAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/VerletStructureAttachForceAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructureAttachForceAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
