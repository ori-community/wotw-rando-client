#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightCanvasEditorTextureCache.h>
#include <Modloader/app/structs/LightCanvas.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::LightCanvasEditorTextureCache {
    IL2CPP_REGISTER_METHOD(0x011469D0, app::LightCanvasEditorTextureCache*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01146BF0, app::Texture2D*, GetLightCanvasEditorTempLightTexture_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas))
    IL2CPP_REGISTER_METHOD(0x01146C40, app::Texture2D*, GetLightCanvasEditorTempLightTexture_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, int32_t state))
    IL2CPP_REGISTER_METHOD(0x01146C80, app::RenderTexture*, GetLightCanvasEditorTempLightRenderTexture, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas))
    IL2CPP_REGISTER_METHOD(0x01146CC0, bool, GetLightCanvasTextureDirty_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas))
    IL2CPP_REGISTER_METHOD(0x01146D10, bool, GetLightCanvasTextureDirty_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, int32_t state))
    IL2CPP_REGISTER_METHOD(0x01146D50, void, SetLightCanvasTextureDirty_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, bool is_dirty))
    IL2CPP_REGISTER_METHOD(0x01146E90, void, SetLightCanvasTextureDirty_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, int32_t state, bool is_dirty))
    IL2CPP_REGISTER_METHOD(0x01146FD0, app::Texture2D*, CreateNewEditorTempTextureForLightCanvas_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, int32_t width, int32_t height))
    IL2CPP_REGISTER_METHOD(0x01147000, app::Texture2D*, CreateNewEditorTempTextureForLightCanvas_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, int32_t width, int32_t height, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x011473E0, app::RenderTexture*, CreateNewEditorTempRenderTextureForLightCanvas, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, int32_t width, int32_t height))
    IL2CPP_REGISTER_METHOD(0x01147780, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData, GetTextureDataForLightCanvas_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas))
    IL2CPP_REGISTER_METHOD(0x011477D0, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData, GetTextureDataForLightCanvas_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, int32_t state))
    IL2CPP_REGISTER_METHOD(0x011479A0, bool, HasTextureDataForLightCanvas, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* light_canvas, int32_t state))
    IL2CPP_REGISTER_METHOD(0x01147A80, void, OnBeforeSerialize, (app::LightCanvasEditorTextureCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01147C40, void, OnAfterDeserialize, (app::LightCanvasEditorTextureCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01147F80, int32_t, GetKey_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* canvas))
    IL2CPP_REGISTER_METHOD(0x01147FC0, int32_t, GetKey_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas* canvas, int32_t state))
    IL2CPP_REGISTER_METHOD(0x01147FF0, void, ctor, (app::LightCanvasEditorTextureCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::LightCanvasEditorTextureCache
