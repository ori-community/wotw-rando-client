#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_Difficulties {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityPlaceholderScalingData_Difficulties__Class** type_info;
        inline app::EntityPlaceholderScalingData_Difficulties__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholderScalingData_Difficulties__Class>(type_info, "", "EntityPlaceholderScalingData", "Difficulties");
        }
        inline app::EntityPlaceholderScalingData_Difficulties* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_Difficulties>(get_class());
        }
    } // namespace EntityPlaceholderScalingData_Difficulties
} // namespace app::classes::types
