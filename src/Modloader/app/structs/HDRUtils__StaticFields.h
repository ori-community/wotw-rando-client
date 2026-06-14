#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HDRUtils__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HDRUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HDRUtils__StaticFields_DEFINED)
#define IL2CPP_STRUCT_HDRUtils__StaticFields_DEFINED
struct HDRUtils__StaticFields {
    bool ShowActualValuesInOptionsScreen;
    float HDRPaperwhiteDefaultValue;
    float PaperwhiteMinValue;
    float PaperwhiteMaxValue;
    float ReconstructionNitsToPaperwhiteRatioDefaultValue;
    float ContrastMinValue;
    float ContrastMaxValue;
    float UIBrightnessMin;
    float UIBrightnessMax;
    float HDRUIBrightnessDefaultValue;
    bool HDRExtraUIBrightnessMultiplier;
    float RichnessMin;
    float RichnessMax;
    float HDRRichnessDefaultValue;
    float ShadowDetailMin;
    float ShadowDetailMax;
    float ShadowDetailDefaultValue;
    float HDRPaperwhiteUIDefaultValue;
    float HDRBrightnessDefaultValue;
    bool m_isDurango;
    bool m_checkedForDurango;
    bool m_userDesiresHDR;
    float m_HDRMinBrightnessValue;
    float m_sceneLuminance;
    float m_softShoulderNits;
    float m_reconstructionNitsToPaperwhiteRatio;
    float m_HDRMaxBrightnessValue;
    float m_paperwhiteValuePC;
    float m_paperwhiteUIValue;
    float m_colorGamutExpansion;
    float m_UIBrightnessBoost;
};
#endif
#if !defined(IL2CPP_STRUCT_HDRUtils__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_HDRUtils__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_HDRUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HDRUtils__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_HDRUtils__StaticFields_FWDDECL)
#include <Modloader/app/structs/HDRUtils__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HDRUtils__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
