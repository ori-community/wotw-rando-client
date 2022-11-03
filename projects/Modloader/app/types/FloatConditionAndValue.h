#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatConditionAndValue {
        namespace {
            inline app::FloatConditionAndValue__Class* type_info_ref = nullptr;
        }
        inline app::FloatConditionAndValue__Class** type_info = &type_info_ref;
        inline app::FloatConditionAndValue__Class* get_class() {
            return il2cpp::get_class<app::FloatConditionAndValue__Class>(type_info, "", "FloatConditionAndValue");
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
