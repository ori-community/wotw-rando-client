#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCanvasEditorTextureCache_c {
        inline app::LightCanvasEditorTextureCache_c__Class** type_info = (app::LightCanvasEditorTextureCache_c__Class**)(modloader::win::memory::resolve_rva(0x047909B0));
        inline app::LightCanvasEditorTextureCache_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvasEditorTextureCache_c__Class>(type_info, "", "LightCanvasEditorTextureCache", "<>c");
        }
        inline app::LightCanvasEditorTextureCache_c* create() {
            return il2cpp::create_object<app::LightCanvasEditorTextureCache_c>(get_class());
        }
    } // namespace LightCanvasEditorTextureCache_c
} // namespace app::classes::types
