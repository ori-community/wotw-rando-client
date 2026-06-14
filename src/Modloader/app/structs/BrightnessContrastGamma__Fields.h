#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrightnessContrastGamma__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrightnessContrastGamma__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrightnessContrastGamma__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BrightnessContrastGamma__Fields_DEFINED
struct BrightnessContrastGamma__Fields {
    struct BaseEffect__Fields _;
    float Brightness;
    float Contrast;
    struct Vector3 ContrastCoeff;
    float Gamma;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrightnessContrastGamma__Fields_FWDDECL)
#define IL2CPP_STRUCT_BrightnessContrastGamma__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BrightnessContrastGamma__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrightnessContrastGamma__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BrightnessContrastGamma__Fields_FWDDECL)
#include <Modloader/app/structs/BrightnessContrastGamma__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrightnessContrastGamma__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
