#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_EntityScalingValues__Array {
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class** type_info = (app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class**)(modloader::win::memory::resolve_rva(0x04732EA0));
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class>(type_info, "", "EntityPlaceholderScalingData+EntityScalingValues[]");
        }
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_EntityScalingValues__Array>(get_class());
        }
    } // namespace EntityPlaceholderScalingData_EntityScalingValues__Array
} // namespace app::classes::types
