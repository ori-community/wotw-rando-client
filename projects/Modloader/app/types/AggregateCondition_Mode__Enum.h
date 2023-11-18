#pragma once
#include <Modloader/app/structs/AggregateCondition_Mode__Enum.h>
#include <Modloader/app/structs/AggregateCondition_Mode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AggregateCondition_Mode__Enum {
        inline app::AggregateCondition_Mode__Enum__Class** type_info() {
            static app::AggregateCondition_Mode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AggregateCondition_Mode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AggregateCondition_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AggregateCondition_Mode__Enum__Class>(type_info(), "", "AggregateCondition", "Mode");
        }
        inline app::AggregateCondition_Mode__Enum* create() {
            return il2cpp::create_object<app::AggregateCondition_Mode__Enum>(get_class());
        }
    } // namespace AggregateCondition_Mode__Enum
} // namespace app::classes::types
