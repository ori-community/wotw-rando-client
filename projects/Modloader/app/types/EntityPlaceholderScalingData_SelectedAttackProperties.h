#pragma once
#include <Modloader/app/structs/EntityPlaceholderScalingData_SelectedAttackProperties.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_SelectedAttackProperties__Boxed.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_SelectedAttackProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_SelectedAttackProperties {
        inline app::EntityPlaceholderScalingData_SelectedAttackProperties__Class** type_info() {
            static app::EntityPlaceholderScalingData_SelectedAttackProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPlaceholderScalingData_SelectedAttackProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPlaceholderScalingData_SelectedAttackProperties__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholderScalingData_SelectedAttackProperties__Class>(type_info(), "", "EntityPlaceholderScalingData", "SelectedAttackProperties");
        }
        inline app::EntityPlaceholderScalingData_SelectedAttackProperties* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_SelectedAttackProperties>(get_class());
        }
        inline app::EntityPlaceholderScalingData_SelectedAttackProperties__Boxed* box(app::EntityPlaceholderScalingData_SelectedAttackProperties value) {
            return il2cpp::box_value<app::EntityPlaceholderScalingData_SelectedAttackProperties__Boxed>(get_class(), value);
        }
    } // namespace EntityPlaceholderScalingData_SelectedAttackProperties
} // namespace app::classes::types
