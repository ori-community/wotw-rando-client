#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextStyleCollection_1 {
        namespace {
            app::TextStyleCollection_1__Class* type_info_ref = nullptr;
        }
        app::TextStyleCollection_1__Class** type_info = &type_info_ref;
        inline app::TextStyleCollection_1__Class* get_class() {
            return il2cpp::get_class<app::TextStyleCollection_1__Class>(type_info, "Moon.UI", "TextStyleCollection");
        }
        inline app::TextStyleCollection_1* create() {
            return il2cpp::create_object<app::TextStyleCollection_1>(get_class());
        }
    } // namespace TextStyleCollection_1
} // namespace app::classes::types
