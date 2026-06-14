#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfField_QualitySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfField_QualitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_QualitySettings_DEFINED)
#include <Modloader/app/structs/DepthOfField_FilterQuality__Enum.h>
#if defined(IL2CPP_STRUCT_DepthOfField_FilterQuality__Enum_DEFINED)
#define IL2CPP_STRUCT_DepthOfField_QualitySettings_DEFINED
struct DepthOfField_QualitySettings {
    bool prefilterBlur;
    DepthOfField_FilterQuality__Enum medianFilter;

    bool dilateNearBlur;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfField_QualitySettings_FWDDECL)
#define IL2CPP_STRUCT_DepthOfField_QualitySettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_DepthOfField_QualitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_QualitySettings_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfField_QualitySettings_FWDDECL)
#include <Modloader/app/structs/DepthOfField_QualitySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfField_QualitySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
