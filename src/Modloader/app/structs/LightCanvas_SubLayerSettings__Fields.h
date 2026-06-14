#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_DEFINED
struct LightCanvas_SubLayerSettingGroup;
struct __declspec(align(8)) LightCanvas_SubLayerSettings__Fields {
    struct LightCanvas_SubLayerSettingGroup* LayerA;
    struct LightCanvas_SubLayerSettingGroup* LayerB;
    struct LightCanvas_SubLayerSettingGroup* LayerC;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_FWDDECL
#include <Modloader/app/structs/LightCanvas_SubLayerSettingGroup.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas_SubLayerSettings__Fields_FWDDECL)
#include <Modloader/app/structs/LightCanvas_SubLayerSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas_SubLayerSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
