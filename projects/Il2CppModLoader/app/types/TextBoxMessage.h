#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxMessage {
        namespace {
            app::TextBoxMessage__Class* type_info_ref = nullptr;
        }
        app::TextBoxMessage__Class** type_info = &type_info_ref;
        inline app::TextBoxMessage__Class* get_class() {
            return il2cpp::get_class<app::TextBoxMessage__Class>(type_info, "", "TextBoxMessage");
        }
        inline app::TextBoxMessage* create() {
            return il2cpp::create_object<app::TextBoxMessage>(get_class());
        }
    } // namespace TextBoxMessage
} // namespace app::classes::types
