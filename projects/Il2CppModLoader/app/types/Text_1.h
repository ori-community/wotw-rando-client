#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Text_1 {
        namespace {
            app::Text_1__Class* type_info_ref = nullptr;
        }
        app::Text_1__Class** type_info = &type_info_ref;
        inline app::Text_1__Class* get_class() {
            return il2cpp::get_class<app::Text_1__Class>(type_info, "Moon.UI", "Text");
        }
        inline app::Text_1* create() {
            return il2cpp::create_object<app::Text_1>(get_class());
        }
        inline app::Text_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Text_1__Array>(get_class(), size);
        }
    } // namespace Text_1
} // namespace app::classes::types
