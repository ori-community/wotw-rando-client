#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_EntityCategory__Enum {
        namespace {
            app::EntityPlaceholderScalingData_EntityCategory__Enum__Class* type_info_ref = nullptr;
        }
        app::EntityPlaceholderScalingData_EntityCategory__Enum__Class** type_info = &type_info_ref;
        inline app::EntityPlaceholderScalingData_EntityCategory__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholderScalingData_EntityCategory__Enum__Class>(type_info, "", "EntityPlaceholderScalingData", "EntityCategory");
        }
        inline app::EntityPlaceholderScalingData_EntityCategory__Enum* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_EntityCategory__Enum>(get_class());
        }
    } // namespace EntityPlaceholderScalingData_EntityCategory__Enum
} // namespace app::classes::types
