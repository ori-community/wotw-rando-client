#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionMethod {
        namespace {
            app::ActionMethod__Class* type_info_ref = nullptr;
        }
        app::ActionMethod__Class** type_info = &type_info_ref;
        inline app::ActionMethod__Class* get_class() {
            return il2cpp::get_class<app::ActionMethod__Class>(type_info, "", "ActionMethod");
        }
        inline app::ActionMethod* create() {
            return il2cpp::create_object<app::ActionMethod>(get_class());
        }
        inline app::ActionMethod__Array* create_array(int size) {
            return il2cpp::array_new<app::ActionMethod__Array>(get_class(), size);
        }
        inline app::ActionMethod__Array* create_array(const std::vector<app::ActionMethod*>& items) {
            return il2cpp::array_new<app::ActionMethod__Array>(get_class(), items);
        }
    } // namespace ActionMethod
} // namespace app::classes::types
