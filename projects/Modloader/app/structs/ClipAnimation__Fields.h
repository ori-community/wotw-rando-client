#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClipAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClipAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClipAnimation__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_ClipAnimation__Fields_DEFINED
struct AnimationClip;
struct ClipAnimation_EventMetadata__Array;
struct ClipAnimation_RootMotionData;
struct ClipAnimation__Fields {
    struct MoonAnimation__Fields _;
    struct AnimationClip* Clip;
    bool KeepLastFrame;
    struct ClipAnimation_EventMetadata__Array* Events;
    struct ClipAnimation_RootMotionData* RootMotionPositionCurves;
    struct ClipAnimation_RootMotionData* RootMotionRotationCurves;
    float Speed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClipAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClipAnimation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationClip.h>
#include <Modloader/app/structs/ClipAnimation_EventMetadata__Array.h>
#include <Modloader/app/structs/ClipAnimation_RootMotionData.h>
#endif
#undef IL2CPP_STRUCT_ClipAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClipAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClipAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/ClipAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClipAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
