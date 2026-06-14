#pragma once
#include <Modloader/app/structs/EntityPlaceholderScalingData_EntityCategory__Enum.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_EntityCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_EntityCategory__Enum {
        inline app::EntityPlaceholderScalingData_EntityCategory__Enum__Class** type_info() {
            static app::EntityPlaceholderScalingData_EntityCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPlaceholderScalingData_EntityCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPlaceholderScalingData_EntityCategory__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholderScalingData_EntityCategory__Enum__Class>(type_info(), "", "EntityPlaceholderScalingData", "EntityCategory");
        }
        inline app::EntityPlaceholderScalingData_EntityCategory__Enum* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_EntityCategory__Enum>(get_class());
        }
    } // namespace EntityPlaceholderScalingData_EntityCategory__Enum
} // namespace app::classes::types
