#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitmapFontChar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitmapFontChar__Class** type_info;
        inline app::BitmapFontChar__Class* get_class() {
            return il2cpp::get_class<app::BitmapFontChar__Class>(type_info, "CatlikeCoding.TextBox", "BitmapFontChar");
        }
        inline app::BitmapFontChar* create() {
            return il2cpp::create_object<app::BitmapFontChar>(get_class());
        }
        inline app::BitmapFontChar__Array* create_array(int size) {
            return il2cpp::array_new<app::BitmapFontChar__Array>(get_class(), size);
        }
    } // namespace BitmapFontChar
} // namespace app::classes::types
