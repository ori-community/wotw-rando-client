#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorVariationManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorVariationManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationManager__Fields_DEFINED)
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_ColorVariationManager__Fields_DEFINED
struct __declspec(align(8)) ColorVariationManager__Fields {
    struct Vector4 m_colorVariationExtraSettings;
    struct Vector4 m_enabledTimeBrightnessDarkLight;
    struct Vector4 m_mainTexScaleScroll;
    struct Vector4 m_distortionScaleScroll;
    int32_t m_colorVariationExtraSettings_Id;
    int32_t m_enabledTimeBrightnessDarkLight_Id;
    int32_t m_colorVariationGlobalParams_Id;
    int32_t m_mainTexScaleScroll_Id;
    int32_t m_distortionScaleScroll_Id;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorVariationManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorVariationManager__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ColorVariationManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorVariationManager__Fields_FWDDECL)
#include <Modloader/app/structs/ColorVariationManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorVariationManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
