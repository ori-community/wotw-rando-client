#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlUIItem {
        namespace {
            app::ControlUIItem__Class* type_info_ref = nullptr;
        }
        app::ControlUIItem__Class** type_info = &type_info_ref;
        inline app::ControlUIItem__Class* get_class() {
            return il2cpp::get_class<app::ControlUIItem__Class>(type_info, "", "ControlUIItem");
        }
        inline app::ControlUIItem* create() {
            return il2cpp::create_object<app::ControlUIItem>(get_class());
        }
        inline app::ControlUIItem__Array* create_array(int size) {
            return il2cpp::array_new<app::ControlUIItem__Array>(get_class(), size);
        }
        inline app::ControlUIItem__Array* create_array(const std::vector<app::ControlUIItem*>& items) {
            return il2cpp::array_new<app::ControlUIItem__Array>(get_class(), items);
        }
    } // namespace ControlUIItem
} // namespace app::classes::types
