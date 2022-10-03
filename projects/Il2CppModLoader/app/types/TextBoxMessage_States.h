#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxMessage_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextBoxMessage_States__Class** type_info;
        inline app::TextBoxMessage_States__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxMessage_States__Class>(type_info, "", "TextBoxMessage", "States");
        }
        inline app::TextBoxMessage_States* create() {
            return il2cpp::create_object<app::TextBoxMessage_States>(get_class());
        }
    } // namespace TextBoxMessage_States
} // namespace app::classes::types
