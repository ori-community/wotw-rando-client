#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/LightCanvas_SubLayerSettings_LayerMode__Enum.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettings_LayerMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_DEFINED
struct __declspec(align(8)) LightCanvas_SubLayerSettingGroup__Fields {
    float LayerPos;
    struct Color LayerColor;
    bool LayerActive;
    LightCanvas_SubLayerSettings_LayerMode__Enum LayerMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettingGroup__Fields_FWDDECL)
#include <Modloader/app/structs/LightCanvas_SubLayerSettingGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas_SubLayerSettingGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
