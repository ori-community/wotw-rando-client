#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxLine__Array {
        namespace {
            app::TextBoxLine__Array__Class* type_info_ref = nullptr;
        }
        app::TextBoxLine__Array__Class** type_info = &type_info_ref;
        inline app::TextBoxLine__Array__Class* get_class() {
            return il2cpp::get_class<app::TextBoxLine__Array__Class>(type_info, "CatlikeCoding.TextBox", "TextBoxLine[]");
        }
        inline app::TextBoxLine__Array* create() {
            return il2cpp::create_object<app::TextBoxLine__Array>(get_class());
        }
    } // namespace TextBoxLine__Array
} // namespace app::classes::types
