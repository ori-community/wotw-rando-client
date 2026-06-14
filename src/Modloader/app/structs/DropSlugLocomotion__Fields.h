#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/GroundEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugLocomotion__Fields_DEFINED
struct Transform;
struct DropSlugLocomotion__Fields {
    struct GroundEntityLocomotion__Fields _;
    float AirSpinSpeed;
    float MaxSpin;
    struct Transform* SpinTransform;
    struct Transform* FallRotationTransform;
    float FallRotationSpeed;
    float m_continousRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DropSlugLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
