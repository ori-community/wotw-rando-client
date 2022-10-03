#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_SelectedAttackProperties {
        namespace {
            app::EntityPlaceholderScalingData_SelectedAttackProperties__Class* type_info_ref = nullptr;
        }
        app::EntityPlaceholderScalingData_SelectedAttackProperties__Class** type_info = &type_info_ref;
        inline app::EntityPlaceholderScalingData_SelectedAttackProperties__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholderScalingData_SelectedAttackProperties__Class>(type_info, "", "EntityPlaceholderScalingData", "SelectedAttackProperties");
        }
        inline app::EntityPlaceholderScalingData_SelectedAttackProperties* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_SelectedAttackProperties>(get_class());
        }
        inline app::EntityPlaceholderScalingData_SelectedAttackProperties__Boxed* box(app::EntityPlaceholderScalingData_SelectedAttackProperties value) {
            return il2cpp::box_value<app::EntityPlaceholderScalingData_SelectedAttackProperties__Boxed>(get_class(), value);
        }
    } // namespace EntityPlaceholderScalingData_SelectedAttackProperties
} // namespace app::classes::types
