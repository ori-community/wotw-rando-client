#pragma once
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingLink {
        inline app::EntityPlaceholderScalingLink__Class** type_info() {
            static app::EntityPlaceholderScalingLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPlaceholderScalingLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPlaceholderScalingLink__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholderScalingLink__Class>(type_info(), "", "EntityPlaceholderScalingLink");
        }
        inline app::EntityPlaceholderScalingLink* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingLink>(get_class());
        }
    } // namespace EntityPlaceholderScalingLink
} // namespace app::classes::types
