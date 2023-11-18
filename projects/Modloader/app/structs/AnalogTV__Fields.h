#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnalogTV__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnalogTV__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalogTV__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_AnalogTV__Fields_DEFINED
struct AnalogTV__Fields {
    struct BaseEffect__Fields _;
    bool AutomaticPhase;
    float Phase;
    bool ConvertToGrayscale;
    float NoiseIntensity;
    float ScanlinesIntensity;
    int32_t ScanlinesCount;
    float ScanlinesOffset;
    bool VerticalScanlines;
    float Distortion;
    float CubicDistortion;
    float Scale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnalogTV__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnalogTV__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnalogTV__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalogTV__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnalogTV__Fields_FWDDECL)
#include <Modloader/app/structs/AnalogTV__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnalogTV__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
