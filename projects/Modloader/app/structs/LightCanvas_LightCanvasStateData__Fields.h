#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_DEFINED
struct Texture2D;
struct LightCanvas_BindData;
struct LightCanvas_SubLayerSettings;
struct LightCanvasStateController_LightCanvasState;
struct __declspec(align(8)) LightCanvas_LightCanvasStateData__Fields {
    struct Texture2D* LightTextureAsset;
    struct LightCanvas_BindData* BindData;
    struct LightCanvas_SubLayerSettings* CanvasSubLayerSettings;
    bool Enabled;
    struct LightCanvasStateController_LightCanvasState* StateDefinition;
    bool HasTexture;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_FWDDECL
#include <Modloader/app/structs/LightCanvasStateController_LightCanvasState.h>
#include <Modloader/app/structs/LightCanvas_BindData.h>
#include <Modloader/app/structs/LightCanvas_SubLayerSettings.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas_LightCanvasStateData__Fields_FWDDECL)
#include <Modloader/app/structs/LightCanvas_LightCanvasStateData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas_LightCanvasStateData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
