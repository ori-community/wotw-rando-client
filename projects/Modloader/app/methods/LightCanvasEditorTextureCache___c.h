#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_c.h>

namespace app::classes::LightCanvasEditorTextureCache___c {
    IL2CPP_REGISTER_METHOD(0x011482F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LightCanvasEditorTextureCache_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01148430,
        int32_t,
        _OnAfterDeserialize_b__21_0,
        app::LightCanvasEditorTextureCache_c* this_ptr,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData x
    )
    IL2CPP_REGISTER_METHOD(
        0x01148440,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData,
        _OnAfterDeserialize_b__21_1,
        app::LightCanvasEditorTextureCache_c* this_ptr,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData x
    )
} // namespace app::classes::LightCanvasEditorTextureCache___c
