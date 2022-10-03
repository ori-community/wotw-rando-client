#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Font_FontTextureRebuildCallback {
        namespace {
            app::Font_FontTextureRebuildCallback__Class* type_info_ref = nullptr;
        }
        app::Font_FontTextureRebuildCallback__Class** type_info = &type_info_ref;
        inline app::Font_FontTextureRebuildCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Font_FontTextureRebuildCallback__Class>(type_info, "UnityEngine", "Font", "FontTextureRebuildCallback");
        }
        inline app::Font_FontTextureRebuildCallback* create() {
            return il2cpp::create_object<app::Font_FontTextureRebuildCallback>(get_class());
        }
    } // namespace Font_FontTextureRebuildCallback
} // namespace app::classes::types
