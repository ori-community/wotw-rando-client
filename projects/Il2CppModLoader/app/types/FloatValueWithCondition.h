#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatValueWithCondition {
        namespace {
            app::FloatValueWithCondition__Class* type_info_ref = nullptr;
        }
        app::FloatValueWithCondition__Class** type_info = &type_info_ref;
        inline app::FloatValueWithCondition__Class* get_class() {
            return il2cpp::get_class<app::FloatValueWithCondition__Class>(type_info, "", "FloatValueWithCondition");
        }
        inline app::FloatValueWithCondition* create() {
            return il2cpp::create_object<app::FloatValueWithCondition>(get_class());
        }
    } // namespace FloatValueWithCondition
} // namespace app::classes::types
