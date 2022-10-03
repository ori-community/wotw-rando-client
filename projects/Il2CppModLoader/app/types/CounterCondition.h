#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CounterCondition {
        namespace {
            app::CounterCondition__Class* type_info_ref = nullptr;
        }
        app::CounterCondition__Class** type_info = &type_info_ref;
        inline app::CounterCondition__Class* get_class() {
            return il2cpp::get_class<app::CounterCondition__Class>(type_info, "", "CounterCondition");
        }
        inline app::CounterCondition* create() {
            return il2cpp::create_object<app::CounterCondition>(get_class());
        }
    } // namespace CounterCondition
} // namespace app::classes::types
