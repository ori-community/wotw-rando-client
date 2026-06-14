#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus_.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Moon_BehaviourSystem_BehaviourStatus__DEFINED)
#define IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_DEFINED
struct MoonAnimation;
struct Locomotion;
struct LocomotionFallingBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct MoonAnimation* FallingAnimation;
    struct ActiveAnimationHandle m_animation;
    struct Locomotion* m_locomotion;
    BehaviourStatus__Enum _Status_k__BackingField;

    struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ _ForceReturnStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionFallingBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionFallingBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionFallingBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
