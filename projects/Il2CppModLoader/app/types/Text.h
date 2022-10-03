#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Text {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Text__Class** type_info;
        inline app::Text__Class* get_class() {
            return il2cpp::get_class<app::Text__Class>(type_info, "UnityEngine.UI", "Text");
        }
        inline app::Text* create() {
            return il2cpp::create_object<app::Text>(get_class());
        }
        inline app::Text__Array* create_array(int size) {
            return il2cpp::array_new<app::Text__Array>(get_class(), size);
        }
    } // namespace Text
} // namespace app::classes::types
