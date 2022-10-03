#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxLine_1__Array {
        namespace {
            app::TextBoxLine_1__Array__Class* type_info_ref = nullptr;
        }
        app::TextBoxLine_1__Array__Class** type_info = &type_info_ref;
        inline app::TextBoxLine_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TextBoxLine_1__Array__Class>(type_info, "Moon.UI", "TextBoxLine[]");
        }
        inline app::TextBoxLine_1__Array* create() {
            return il2cpp::create_object<app::TextBoxLine_1__Array>(get_class());
        }
    } // namespace TextBoxLine_1__Array
} // namespace app::classes::types
