#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HueSaturationValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HueSaturationValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HueSaturationValue__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_HueSaturationValue__Fields_DEFINED
struct HueSaturationValue__Fields {
    struct BaseEffect__Fields _;
    float MasterHue;
    float MasterSaturation;
    float MasterValue;
    float RedsHue;
    float RedsSaturation;
    float RedsValue;
    float YellowsHue;
    float YellowsSaturation;
    float YellowsValue;
    float GreensHue;
    float GreensSaturation;
    float GreensValue;
    float CyansHue;
    float CyansSaturation;
    float CyansValue;
    float BluesHue;
    float BluesSaturation;
    float BluesValue;
    float MagentasHue;
    float MagentasSaturation;
    float MagentasValue;
    bool AdvancedMode;
    int32_t e_CurrentChannel;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HueSaturationValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_HueSaturationValue__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_HueSaturationValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HueSaturationValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HueSaturationValue__Fields_FWDDECL)
#include <Modloader/app/structs/HueSaturationValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HueSaturationValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
