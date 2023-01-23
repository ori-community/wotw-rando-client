#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_SelectedAttackProperties__Class.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_SelectedAttackProperties.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_SelectedAttackProperties__Boxed.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_SelectedAttackProperties {
        namespace {
            inline app::EntityPlaceholderScalingData_SelectedAttackProperties__Class* type_info_ref = nullptr;
        }
        inline app::EntityPlaceholderScalingData_SelectedAttackProperties__Class** type_info = &type_info_ref;
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
