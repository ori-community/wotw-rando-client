#pragma once
#include <Modloader/app/structs/FloatConditionAndValue.h>
#include <Modloader/app/structs/FloatConditionAndValue__Array.h>
#include <Modloader/app/structs/FloatConditionAndValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatConditionAndValue {
        inline app::FloatConditionAndValue__Class** type_info() {
            static app::FloatConditionAndValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatConditionAndValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatConditionAndValue__Class* get_class() {
            return il2cpp::get_class<app::FloatConditionAndValue__Class>(type_info(), "", "FloatConditionAndValue");
        }
        inline app::FloatConditionAndValue* create() {
            return il2cpp::create_object<app::FloatConditionAndValue>(get_class());
        }
        inline app::FloatConditionAndValue__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatConditionAndValue__Array>(get_class(), size);
        }
        inline app::FloatConditionAndValue__Array* create_array(const std::vector<app::FloatConditionAndValue*>& items) {
            return il2cpp::array_new<app::FloatConditionAndValue__Array>(get_class(), items);
        }
    } // namespace FloatConditionAndValue
} // namespace app::classes::types
