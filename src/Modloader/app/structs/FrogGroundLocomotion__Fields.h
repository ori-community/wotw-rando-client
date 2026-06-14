#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogGroundLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogGroundLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogGroundLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/GroundEntityLocomotion__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_FrogGroundLocomotion__Fields_DEFINED
struct RaycastHit__Array;
struct FrogGroundLocomotion__Fields {
    struct GroundEntityLocomotion__Fields _;
    float CanTraverseToTargetCheckCooldown;
    struct Vector3 CanTraverseToTargetStepOffset;
    struct Vector3 CanTraverseToTargetStep;
    float CanTraverseToTargetMaxFallDistance;
    int32_t CanTraverseToTargetChecksLimit;
    bool m_canTraverseToTarget;
    float m_canTraverseToTargetCheckCooldown;
    struct RaycastHit__Array* m_hitInfos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogGroundLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrogGroundLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_FrogGroundLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogGroundLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrogGroundLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/FrogGroundLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogGroundLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
