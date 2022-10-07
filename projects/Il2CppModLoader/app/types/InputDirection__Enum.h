#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputDirection__Enum {
        namespace {
            app::InputDirection__Enum__Class* type_info_ref = nullptr;
        }
        app::InputDirection__Enum__Class** type_info = &type_info_ref;
        inline app::InputDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::InputDirection__Enum__Class>(type_info, "Moon.ComboSystem", "InputDirection");
        }
        inline app::InputDirection__Enum* create() {
            return il2cpp::create_object<app::InputDirection__Enum>(get_class());
        }
        inline app::InputDirection__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::InputDirection__Enum__Array>(get_class(), size);
        }
        inline app::InputDirection__Enum__Array* create_array(const std::vector<app::InputDirection__Enum*>& items) {
            return il2cpp::array_new<app::InputDirection__Enum__Array>(get_class(), items);
        }
    } // namespace InputDirection__Enum
} // namespace app::classes::types
