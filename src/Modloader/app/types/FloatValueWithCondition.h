#pragma once
#include <Modloader/app/structs/FloatValueWithCondition.h>
#include <Modloader/app/structs/FloatValueWithCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatValueWithCondition {
        inline app::FloatValueWithCondition__Class** type_info() {
            static app::FloatValueWithCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatValueWithCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatValueWithCondition__Class* get_class() {
            return il2cpp::get_class<app::FloatValueWithCondition__Class>(type_info(), "", "FloatValueWithCondition");
        }
        inline app::FloatValueWithCondition* create() {
            return il2cpp::create_object<app::FloatValueWithCondition>(get_class());
        }
    } // namespace FloatValueWithCondition
} // namespace app::classes::types
