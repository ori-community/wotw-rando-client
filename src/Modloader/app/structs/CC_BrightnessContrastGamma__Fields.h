#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_DEFINED)
#include <Modloader/app/structs/CC_Base__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Base__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_DEFINED
struct CC_BrightnessContrastGamma__Fields {
    struct CC_Base__Fields _;
    float redCoeff;
    float greenCoeff;
    float blueCoeff;
    float brightness;
    float contrast;
    float gamma;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_FWDDECL)
#define IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CC_BrightnessContrastGamma__Fields_FWDDECL)
#include <Modloader/app/structs/CC_BrightnessContrastGamma__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_BrightnessContrastGamma__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
