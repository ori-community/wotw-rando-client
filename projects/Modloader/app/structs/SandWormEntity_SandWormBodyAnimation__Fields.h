#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_DEFINED
struct String;
struct AnimationCurve;
struct __declspec(align(8)) SandWormEntity_SandWormBodyAnimation__Fields {
    struct String* name;
    struct AnimationCurve* HeadRotationSpeed;
    float HeadRotationScale;
    struct AnimationCurve* SegmentWidthNoiseAmplitude;
    float WidthNoiseAmplitudeScale;
    struct AnimationCurve* SegmentNoiseWidthFrequency;
    float NoiseWidthFrequencyScale;
    struct AnimationCurve* Mouth;
    bool Loop;
    float _Time_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormEntity_SandWormBodyAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
