#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HealthCondition {
        namespace {
            app::HealthCondition__Class* type_info_ref = nullptr;
        }
        app::HealthCondition__Class** type_info = &type_info_ref;
        inline app::HealthCondition__Class* get_class() {
            return il2cpp::get_class<app::HealthCondition__Class>(type_info, "", "HealthCondition");
        }
        inline app::HealthCondition* create() {
            return il2cpp::create_object<app::HealthCondition>(get_class());
        }
    } // namespace HealthCondition
} // namespace app::classes::types
