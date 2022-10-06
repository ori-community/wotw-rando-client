#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeLabel {
        namespace {
            app::RuntimeLabel__Class* type_info_ref = nullptr;
        }
        app::RuntimeLabel__Class** type_info = &type_info_ref;
        inline app::RuntimeLabel__Class* get_class() {
            return il2cpp::get_class<app::RuntimeLabel__Class>(type_info, "System.Linq.Expressions.Interpreter", "RuntimeLabel");
        }
        inline app::RuntimeLabel* create() {
            return il2cpp::create_object<app::RuntimeLabel>(get_class());
        }
        inline app::RuntimeLabel__Boxed* box(app::RuntimeLabel value) {
            return il2cpp::box_value<app::RuntimeLabel__Boxed>(get_class(), value);
        }
        inline app::RuntimeLabel__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeLabel__Array>(get_class(), size);
        }
        inline app::RuntimeLabel__Array* create_array(const std::vector<app::RuntimeLabel__Boxed>& items) {
            return il2cpp::array_new<app::RuntimeLabel__Array>(get_class(), items);
        }
    } // namespace RuntimeLabel
} // namespace app::classes::types
