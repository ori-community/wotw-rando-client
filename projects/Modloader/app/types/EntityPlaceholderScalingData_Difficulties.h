#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_Difficulties {
        inline app::EntityPlaceholderScalingData_Difficulties__Class** type_info = (app::EntityPlaceholderScalingData_Difficulties__Class**)(modloader::win::memory::resolve_rva(0x04737140));
        inline app::EntityPlaceholderScalingData_Difficulties__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholderScalingData_Difficulties__Class>(type_info, "", "EntityPlaceholderScalingData", "Difficulties");
        }
        inline app::EntityPlaceholderScalingData_Difficulties* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_Difficulties>(get_class());
        }
    } // namespace EntityPlaceholderScalingData_Difficulties
} // namespace app::classes::types
