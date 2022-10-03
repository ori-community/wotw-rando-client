#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatConditionAndValue__Array {
        namespace {
            app::FloatConditionAndValue__Array__Class* type_info_ref = nullptr;
        }
        app::FloatConditionAndValue__Array__Class** type_info = &type_info_ref;
        inline app::FloatConditionAndValue__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatConditionAndValue__Array__Class>(type_info, "", "FloatConditionAndValue[]");
        }
        inline app::FloatConditionAndValue__Array* create() {
            return il2cpp::create_object<app::FloatConditionAndValue__Array>(get_class());
        }
    } // namespace FloatConditionAndValue__Array
} // namespace app::classes::types
