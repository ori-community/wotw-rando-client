#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectionalBlur__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectionalBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalBlur__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/DirectionalBlur_QualityPreset__Enum.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_DirectionalBlur_QualityPreset__Enum_DEFINED)
#define IL2CPP_STRUCT_DirectionalBlur__Fields_DEFINED
struct DirectionalBlur__Fields {
    struct BaseEffect__Fields _;
    DirectionalBlur_QualityPreset__Enum Quality;

    int32_t Samples;
    float Strength;
    float Angle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectionalBlur__Fields_FWDDECL)
#define IL2CPP_STRUCT_DirectionalBlur__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DirectionalBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalBlur__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DirectionalBlur__Fields_FWDDECL)
#include <Modloader/app/structs/DirectionalBlur__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectionalBlur__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
