#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AggregateCondition_Mode__Enum {
        namespace {
            app::AggregateCondition_Mode__Enum__Class* type_info_ref = nullptr;
        }
        app::AggregateCondition_Mode__Enum__Class** type_info = &type_info_ref;
        inline app::AggregateCondition_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AggregateCondition_Mode__Enum__Class>(type_info, "", "AggregateCondition", "Mode");
        }
        inline app::AggregateCondition_Mode__Enum* create() {
            return il2cpp::create_object<app::AggregateCondition_Mode__Enum>(get_class());
        }
    } // namespace AggregateCondition_Mode__Enum
} // namespace app::classes::types
