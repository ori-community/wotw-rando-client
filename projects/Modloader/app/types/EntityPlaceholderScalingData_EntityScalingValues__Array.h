#pragma once
#include <Modloader/app/structs/EntityPlaceholderScalingData_EntityScalingValues__Array.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_EntityScalingValues__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData_EntityScalingValues__Array {
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class** type_info() {
            static app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class**)(modloader::win::memory::resolve_rva(0x04732EA0));
            }
            return cache;
        }
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class>(type_info(), "", "EntityPlaceholderScalingData+EntityScalingValues[]");
        }
        inline app::EntityPlaceholderScalingData_EntityScalingValues__Array* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData_EntityScalingValues__Array>(get_class());
        }
    } // namespace EntityPlaceholderScalingData_EntityScalingValues__Array
} // namespace app::classes::types
