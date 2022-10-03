#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_EntityScalingValues__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class** type_info;
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class>(type_info, "", "EntityPlaceholderScalingData+EntityScalingValues[]");
        }
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_EntityScalingValues__Array>(get_class());
        }
    } // namespace EntityPlaceholderScalingData_EntityScalingValues__Array
} // namespace app::classes::types
