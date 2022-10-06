#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecimalConstantAttribute {
        namespace {
            app::DecimalConstantAttribute__Class* type_info_ref = nullptr;
        }
        app::DecimalConstantAttribute__Class** type_info = &type_info_ref;
        inline app::DecimalConstantAttribute__Class* get_class() {
            return il2cpp::get_class<app::DecimalConstantAttribute__Class>(type_info, "System.Runtime.CompilerServices", "DecimalConstantAttribute");
        }
        inline app::DecimalConstantAttribute* create() {
            return il2cpp::create_object<app::DecimalConstantAttribute>(get_class());
        }
        inline app::DecimalConstantAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::DecimalConstantAttribute__Array>(get_class(), size);
        }
        inline app::DecimalConstantAttribute__Array* create_array(const std::vector<app::DecimalConstantAttribute*>& items) {
            return il2cpp::array_new<app::DecimalConstantAttribute__Array>(get_class(), items);
        }
    } // namespace DecimalConstantAttribute
} // namespace app::classes::types
