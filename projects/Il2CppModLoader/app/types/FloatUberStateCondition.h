#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatUberStateCondition {
        namespace {
            app::FloatUberStateCondition__Class* type_info_ref = nullptr;
        }
        app::FloatUberStateCondition__Class** type_info = &type_info_ref;
        inline app::FloatUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::FloatUberStateCondition__Class>(type_info, "", "FloatUberStateCondition");
        }
        inline app::FloatUberStateCondition* create() {
            return il2cpp::create_object<app::FloatUberStateCondition>(get_class());
        }
    } // namespace FloatUberStateCondition
} // namespace app::classes::types
