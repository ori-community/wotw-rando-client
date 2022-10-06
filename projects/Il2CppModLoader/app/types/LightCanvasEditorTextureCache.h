#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvasEditorTextureCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvasEditorTextureCache__Class** type_info;
        inline app::LightCanvasEditorTextureCache__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasEditorTextureCache__Class>(type_info, "", "LightCanvasEditorTextureCache");
        }
        inline app::LightCanvasEditorTextureCache* create() {
            return il2cpp::create_object<app::LightCanvasEditorTextureCache>(get_class());
        }
        inline app::LightCanvasEditorTextureCache__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvasEditorTextureCache__Array>(get_class(), size);
        }
        inline app::LightCanvasEditorTextureCache__Array* create_array(const std::vector<app::LightCanvasEditorTextureCache*>& items) {
            return il2cpp::array_new<app::LightCanvasEditorTextureCache__Array>(get_class(), items);
        }
    } // namespace LightCanvasEditorTextureCache
} // namespace app::classes::types
