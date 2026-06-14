#pragma once
#include <Modloader/app/structs/ButtonPressedCondition.h>
#include <Modloader/app/structs/ButtonPressedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ButtonPressedCondition {
        inline app::ButtonPressedCondition__Class** type_info() {
            static app::ButtonPressedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ButtonPressedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ButtonPressedCondition__Class* get_class() {
            return il2cpp::get_class<app::ButtonPressedCondition__Class>(type_info(), "", "ButtonPressedCondition");
        }
        inline app::ButtonPressedCondition* create() {
            return il2cpp::create_object<app::ButtonPressedCondition>(get_class());
        }
    } // namespace ButtonPressedCondition
} // namespace app::classes::types
