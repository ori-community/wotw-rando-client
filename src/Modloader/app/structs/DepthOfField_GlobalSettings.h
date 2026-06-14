#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfField_GlobalSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfField_GlobalSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_GlobalSettings_DEFINED)
#include <Modloader/app/structs/DepthOfField_ApertureShape__Enum.h>
#include <Modloader/app/structs/DepthOfField_QualityPreset__Enum.h>
#include <Modloader/app/structs/DepthOfField_TweakMode__Enum.h>
#if defined(IL2CPP_STRUCT_DepthOfField_TweakMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_DepthOfField_QualityPreset__Enum_DEFINED) && defined(IL2CPP_STRUCT_DepthOfField_ApertureShape__Enum_DEFINED)
#define IL2CPP_STRUCT_DepthOfField_GlobalSettings_DEFINED
struct DepthOfField_GlobalSettings {
    bool visualizeFocus;
    DepthOfField_TweakMode__Enum tweakMode;

    DepthOfField_QualityPreset__Enum filteringQuality;

    DepthOfField_ApertureShape__Enum apertureShape;

    float apertureOrientation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfField_GlobalSettings_FWDDECL)
#define IL2CPP_STRUCT_DepthOfField_GlobalSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_DepthOfField_GlobalSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_GlobalSettings_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfField_GlobalSettings_FWDDECL)
#include <Modloader/app/structs/DepthOfField_GlobalSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfField_GlobalSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
