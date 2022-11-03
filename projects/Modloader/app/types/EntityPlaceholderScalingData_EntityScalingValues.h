#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_EntityScalingValues {
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Class** type_info = (app::EntityPlaceholderScalingData_EntityScalingValues__Class**)(modloader::win::memory::resolve_rva(0x0476F0C8));
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholderScalingData_EntityScalingValues__Class>(type_info, "", "EntityPlaceholderScalingData", "EntityScalingValues");
        }
        inline app::EntityPlaceholderScalingData_EntityScalingValues* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_EntityScalingValues>(get_class());
        }
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityPlaceholderScalingData_EntityScalingValues__Array>(get_class(), size);
        }
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array* create_array(const std::vector<app::EntityPlaceholderScalingData_EntityScalingValues*>& items) {
            return il2cpp::array_new<app::EntityPlaceholderScalingData_EntityScalingValues__Array>(get_class(), items);
        }
    } // namespace EntityPlaceholderScalingData_EntityScalingValues
} // namespace app::classes::types
