#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_DEFINED)
#define IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_DEFINED
struct Texture2D;
struct RenderTexture;
struct LightCanvasEditorTextureCache_LightCanvasEditorTextureData {
    int32_t Id;
    struct Texture2D* EditorTempLightTexture;
    struct RenderTexture* EditorTempLightRenderTexture;
    bool TextureDataDirty;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_FWDDECL)
#define IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_FWDDECL
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_FWDDECL)
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
