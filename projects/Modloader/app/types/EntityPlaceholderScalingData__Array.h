#pragma once
#include <Modloader/app/structs/EntityPlaceholderScalingData__Array.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData__Array {
        inline app::EntityPlaceholderScalingData__Array__Class** type_info() {
            static app::EntityPlaceholderScalingData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPlaceholderScalingData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPlaceholderScalingData__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholderScalingData__Array__Class>(type_info(), "", "EntityPlaceholderScalingData[]");
        }
        inline app::EntityPlaceholderScalingData__Array* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData__Array>(get_class());
        }
    } // namespace EntityPlaceholderScalingData__Array
} // namespace app::classes::types
