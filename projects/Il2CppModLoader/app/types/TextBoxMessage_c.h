#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxMessage_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextBoxMessage_c__Class** type_info;
        inline app::TextBoxMessage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxMessage_c__Class>(type_info, "", "TextBoxMessage", "<>c");
        }
        inline app::TextBoxMessage_c* create() {
            return il2cpp::create_object<app::TextBoxMessage_c>(get_class());
        }
    } // namespace TextBoxMessage_c
} // namespace app::classes::types
