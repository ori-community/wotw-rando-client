#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_DEFINED
struct AnimationCurve;
struct SpiritLeashEffectPose__Fields {
    struct ScriptableObject__Fields _;
    struct AnimationCurve* pointDistributionCurve;
    struct AnimationCurve* verticalSineTimeProgression;
    struct AnimationCurve* verticalSineSpeedOverTime;
    struct AnimationCurve* verticalSineAmplitude;
    struct AnimationCurve* verticalSineFrequency;
    struct AnimationCurve* horizontalSineTimeProgression;
    struct AnimationCurve* horizontalSineSpeedOverTime;
    struct AnimationCurve* horizontalSineAmplitude;
    struct AnimationCurve* horizontalSineFrequency;
    float randomTimeOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLeashEffectPose__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLeashEffectPose__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLeashEffectPose__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
