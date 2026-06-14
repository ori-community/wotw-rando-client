#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionAnimation__Fields_DEFINED)
#include <Modloader/app/structs/RangeAnimationEntry__Fields.h>
#if defined(IL2CPP_STRUCT_RangeAnimationEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionAnimation__Fields_DEFINED
struct MoonAnimation;
struct LocomotionAnimation__Fields {
    struct RangeAnimationEntry__Fields _;
    struct MoonAnimation* ClipAnimation;
    float Distance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionAnimation__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_LocomotionAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
