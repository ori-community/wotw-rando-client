#pragma once
#include <Modloader/app/structs/HDREnabledCondition.h>
#include <Modloader/app/structs/HDREnabledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDREnabledCondition {
        inline app::HDREnabledCondition__Class** type_info() {
            static app::HDREnabledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HDREnabledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HDREnabledCondition__Class* get_class() {
            return il2cpp::get_class<app::HDREnabledCondition__Class>(type_info(), "", "HDREnabledCondition");
        }
        inline app::HDREnabledCondition* create() {
            return il2cpp::create_object<app::HDREnabledCondition>(get_class());
        }
    } // namespace HDREnabledCondition
} // namespace app::classes::types
