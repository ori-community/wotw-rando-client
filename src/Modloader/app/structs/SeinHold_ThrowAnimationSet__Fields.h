#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_DEFINED)
#include <Modloader/app/structs/ThrowAnimationType__Enum.h>
#if defined(IL2CPP_STRUCT_ThrowAnimationType__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonAnimation;
struct __declspec(align(8)) SeinHold_ThrowAnimationSet__Fields {
    ThrowAnimationType__Enum ThrowAnimationType;

    struct FloatAnimationParameter* AimAngleParameter;
    struct MoonAnimation* Aiming;
    int32_t AimingPriority;
    struct MoonAnimation* Throw;
    int32_t ThrowPriority;
    struct MoonAnimation* WallAiming;
    struct MoonAnimation* WallThrow;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinHold_ThrowAnimationSet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
