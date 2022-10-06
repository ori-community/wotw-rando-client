#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvasEditorTextureCache_LightCanvasEditorTextureData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Class** type_info;
        inline app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Class>(type_info, "", "LightCanvasEditorTextureCache", "LightCanvasEditorTextureData");
        }
        inline app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData* create() {
            return il2cpp::create_object<app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData>(get_class());
        }
        inline app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Boxed* box(app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value) {
            return il2cpp::box_value<app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Boxed>(get_class(), value);
        }
        inline app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array>(get_class(), size);
        }
        inline app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array* create_array(const std::vector<app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Boxed>& items) {
            return il2cpp::array_new<app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array>(get_class(), items);
        }
    } // namespace LightCanvasEditorTextureCache_LightCanvasEditorTextureData
} // namespace app::classes::types
