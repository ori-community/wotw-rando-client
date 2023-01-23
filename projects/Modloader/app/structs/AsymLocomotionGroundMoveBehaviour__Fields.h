#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_DEFINED
struct LocomotionAnimation__Array;
struct AsymLocomotionGroundMoveBehaviour__Fields {
    struct LocomotionGroundMoveBehaviour__Fields _;
    struct LocomotionAnimation__Array* MovementAnimationsFacingLeft;
    struct LocomotionAnimation__Array* MovementAnimationsFacingRight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LocomotionAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsymLocomotionGroundMoveBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/AsymLocomotionGroundMoveBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsymLocomotionGroundMoveBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
