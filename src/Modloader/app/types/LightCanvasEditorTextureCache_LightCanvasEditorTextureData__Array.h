#pragma once
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array {
        inline app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array__Class** type_info() {
            static app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array__Class>(type_info(), "", "LightCanvasEditorTextureCache+LightCanvasEditorTextureData[]");
        }
        inline app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array* create() {
            return il2cpp::create_object<app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array>(get_class());
        }
    } // namespace LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array
} // namespace app::classes::types
