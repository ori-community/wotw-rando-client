#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItem {
        namespace {
            app::CleverMenuItem__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItem__Class** type_info = &type_info_ref;
        inline app::CleverMenuItem__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItem__Class>(type_info, "", "CleverMenuItem");
        }
        inline app::CleverMenuItem* create() {
            return il2cpp::create_object<app::CleverMenuItem>(get_class());
        }
        inline app::CleverMenuItem__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItem__Array>(get_class(), size);
        }
        inline app::CleverMenuItem__Array* create_array(const std::vector<app::CleverMenuItem*>& items) {
            return il2cpp::array_new<app::CleverMenuItem__Array>(get_class(), items);
        }
    } // namespace CleverMenuItem
} // namespace app::classes::types
