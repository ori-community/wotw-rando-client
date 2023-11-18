#pragma once
#include <Modloader/app/structs/CounterCondition.h>
#include <Modloader/app/structs/CounterCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CounterCondition {
        inline app::CounterCondition__Class** type_info() {
            static app::CounterCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CounterCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CounterCondition__Class* get_class() {
            return il2cpp::get_class<app::CounterCondition__Class>(type_info(), "", "CounterCondition");
        }
        inline app::CounterCondition* create() {
            return il2cpp::create_object<app::CounterCondition>(get_class());
        }
    } // namespace CounterCondition
} // namespace app::classes::types
