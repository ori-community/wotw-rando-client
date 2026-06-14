#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurningAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurningAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurningAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_TurningAnimation__Fields_DEFINED
struct MoonAnimation;
struct RootMotionProcessorData;
struct __declspec(align(8)) TurningAnimation__Fields {
    struct MoonAnimation* Animation;
    int32_t AnimationPriority;
    float TurnDuration;
    bool UseAnimationDuration;
    bool PreserveMomentum;
    struct RootMotionProcessorData* RootMotion;
};
#endif
#if !defined(IL2CPP_STRUCT_TurningAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurningAnimation__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_TurningAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurningAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurningAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/TurningAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurningAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
