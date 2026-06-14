#pragma once
#include <Modloader/app/structs/AggregateCondition.h>
#include <Modloader/app/structs/AggregateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AggregateCondition {
        inline app::AggregateCondition__Class** type_info() {
            static app::AggregateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AggregateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AggregateCondition__Class* get_class() {
            return il2cpp::get_class<app::AggregateCondition__Class>(type_info(), "", "AggregateCondition");
        }
        inline app::AggregateCondition* create() {
            return il2cpp::create_object<app::AggregateCondition>(get_class());
        }
    } // namespace AggregateCondition
} // namespace app::classes::types
