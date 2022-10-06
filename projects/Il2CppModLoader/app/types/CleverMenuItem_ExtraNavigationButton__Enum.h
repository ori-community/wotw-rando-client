#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItem_ExtraNavigationButton__Enum {
        namespace {
            app::CleverMenuItem_ExtraNavigationButton__Enum__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItem_ExtraNavigationButton__Enum__Class** type_info = &type_info_ref;
        inline app::CleverMenuItem_ExtraNavigationButton__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItem_ExtraNavigationButton__Enum__Class>(type_info, "", "CleverMenuItem", "ExtraNavigationButton");
        }
        inline app::CleverMenuItem_ExtraNavigationButton__Enum* create() {
            return il2cpp::create_object<app::CleverMenuItem_ExtraNavigationButton__Enum>(get_class());
        }
        inline app::CleverMenuItem_ExtraNavigationButton__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItem_ExtraNavigationButton__Enum__Array>(get_class(), size);
        }
        inline app::CleverMenuItem_ExtraNavigationButton__Enum__Array* create_array(const std::vector<app::CleverMenuItem_ExtraNavigationButton__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::CleverMenuItem_ExtraNavigationButton__Enum__Array>(get_class(), items);
        }
    } // namespace CleverMenuItem_ExtraNavigationButton__Enum
} // namespace app::classes::types
