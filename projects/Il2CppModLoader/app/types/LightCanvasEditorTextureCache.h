#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCanvasEditorTextureCache {
        inline app::LightCanvasEditorTextureCache__Class** type_info = (app::LightCanvasEditorTextureCache__Class**)(modloader::win::memory::resolve_rva(0x0476CAE8));
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
