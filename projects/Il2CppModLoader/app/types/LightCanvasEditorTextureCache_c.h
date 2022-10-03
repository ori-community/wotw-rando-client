#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvasEditorTextureCache_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvasEditorTextureCache_c__Class** type_info;
        inline app::LightCanvasEditorTextureCache_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvasEditorTextureCache_c__Class>(type_info, "", "LightCanvasEditorTextureCache", "<>c");
        }
        inline app::LightCanvasEditorTextureCache_c* create() {
            return il2cpp::create_object<app::LightCanvasEditorTextureCache_c>(get_class());
        }
    } // namespace LightCanvasEditorTextureCache_c
} // namespace app::classes::types
