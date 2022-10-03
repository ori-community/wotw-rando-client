#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxIconsFontGenerator {
        namespace {
            app::TextBoxIconsFontGenerator__Class* type_info_ref = nullptr;
        }
        app::TextBoxIconsFontGenerator__Class** type_info = &type_info_ref;
        inline app::TextBoxIconsFontGenerator__Class* get_class() {
            return il2cpp::get_class<app::TextBoxIconsFontGenerator__Class>(type_info, "", "TextBoxIconsFontGenerator");
        }
        inline app::TextBoxIconsFontGenerator* create() {
            return il2cpp::create_object<app::TextBoxIconsFontGenerator>(get_class());
        }
    } // namespace TextBoxIconsFontGenerator
} // namespace app::classes::types
