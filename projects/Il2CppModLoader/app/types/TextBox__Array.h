#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBox__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextBox__Array__Class** type_info;
        inline app::TextBox__Array__Class* get_class() {
            return il2cpp::get_class<app::TextBox__Array__Class>(type_info, "CatlikeCoding.TextBox", "TextBox[]");
        }
        inline app::TextBox__Array* create() {
            return il2cpp::create_object<app::TextBox__Array>(get_class());
        }
    } // namespace TextBox__Array
} // namespace app::classes::types
