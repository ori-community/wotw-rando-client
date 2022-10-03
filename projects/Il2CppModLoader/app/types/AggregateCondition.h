#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AggregateCondition {
        namespace {
            app::AggregateCondition__Class* type_info_ref = nullptr;
        }
        app::AggregateCondition__Class** type_info = &type_info_ref;
        inline app::AggregateCondition__Class* get_class() {
            return il2cpp::get_class<app::AggregateCondition__Class>(type_info, "", "AggregateCondition");
        }
        inline app::AggregateCondition* create() {
            return il2cpp::create_object<app::AggregateCondition>(get_class());
        }
    } // namespace AggregateCondition
} // namespace app::classes::types
