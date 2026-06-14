#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A210,
        int32_t,
        Compare,
        app::ComparisonComparer_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData x,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_
