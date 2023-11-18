#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) SeinAnimationSpeedSettings__Fields {
    struct AnimationCurve* RunAnimationSpeed;
    struct AnimationCurve* JogAnimationSpeed;
    struct AnimationCurve* WalkAnimationSpeed;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SeinAnimationSpeedSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAnimationSpeedSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
