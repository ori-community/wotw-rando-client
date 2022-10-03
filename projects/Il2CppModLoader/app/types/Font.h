#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Font {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Font__Class** type_info;
        inline app::Font__Class* get_class() {
            return il2cpp::get_class<app::Font__Class>(type_info, "UnityEngine", "Font");
        }
        inline app::Font* create() {
            return il2cpp::create_object<app::Font>(get_class());
        }
        inline app::Font__Array* create_array(int size) {
            return il2cpp::array_new<app::Font__Array>(get_class(), size);
        }
    } // namespace Font
} // namespace app::classes::types
