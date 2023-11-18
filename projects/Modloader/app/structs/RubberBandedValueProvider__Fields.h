#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RubberBandedValueProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RubberBandedValueProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RubberBandedValueProvider__Fields_DEFINED)
#include <Modloader/app/structs/RubberBandedValueProvider_DistanceMeasureMode__Enum.h>
#if defined(IL2CPP_STRUCT_RubberBandedValueProvider_DistanceMeasureMode__Enum_DEFINED)
#define IL2CPP_STRUCT_RubberBandedValueProvider__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) RubberBandedValueProvider__Fields {
    RubberBandedValueProvider_DistanceMeasureMode__Enum DistanceMode;

    float MinDistance;
    float SweetSpotDistance;
    float MaxDistance;
    float MinMultiplier;
    float MaxMultiplier;
    struct AnimationCurve* MaxMuliplierPerNormalizedDistance;
    struct AnimationCurve* MinMultiplierPerNormalizedDistance;
    bool AffectedByGameModeDifficulty;
    bool OverrideEasyMultiplier;
    float OverrideEasyMultiplierValue;
    bool OverrideNormalMultiplier;
    float OverrideNormalMultiplierValue;
    bool OverrideHardMultiplier;
    float OverrideHardMultiplierValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RubberBandedValueProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_RubberBandedValueProvider__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_RubberBandedValueProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RubberBandedValueProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RubberBandedValueProvider__Fields_FWDDECL)
#include <Modloader/app/structs/RubberBandedValueProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RubberBandedValueProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
