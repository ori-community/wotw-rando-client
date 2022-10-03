#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Condition {
        namespace {
            app::Condition__Class* type_info_ref = nullptr;
        }
        app::Condition__Class** type_info = &type_info_ref;
        inline app::Condition__Class* get_class() {
            return il2cpp::get_class<app::Condition__Class>(type_info, "Moon.BehaviourSystem", "Condition");
        }
        inline app::Condition* create() {
            return il2cpp::create_object<app::Condition>(get_class());
        }
        inline app::Condition__Array* create_array(int size) {
            return il2cpp::array_new<app::Condition__Array>(get_class(), size);
        }
    } // namespace Condition
} // namespace app::classes::types
