#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RadialBlur__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RadialBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RadialBlur__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/RadialBlur_QualityPreset__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_RadialBlur_QualityPreset__Enum_DEFINED)
#define IL2CPP_STRUCT_RadialBlur__Fields_DEFINED
struct RadialBlur__Fields {
    struct BaseEffect__Fields _;
    float Strength;
    int32_t Samples;
    struct Vector2 Center;
    RadialBlur_QualityPreset__Enum Quality;

    float Sharpness;
    float Darkness;
    bool EnableVignette;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RadialBlur__Fields_FWDDECL)
#define IL2CPP_STRUCT_RadialBlur__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RadialBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RadialBlur__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RadialBlur__Fields_FWDDECL)
#include <Modloader/app/structs/RadialBlur__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RadialBlur__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
