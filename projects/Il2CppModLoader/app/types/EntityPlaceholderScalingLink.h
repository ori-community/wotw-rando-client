#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingLink {
        namespace {
            app::EntityPlaceholderScalingLink__Class* type_info_ref = nullptr;
        }
        app::EntityPlaceholderScalingLink__Class** type_info = &type_info_ref;
        inline app::EntityPlaceholderScalingLink__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholderScalingLink__Class>(type_info, "", "EntityPlaceholderScalingLink");
        }
        inline app::EntityPlaceholderScalingLink* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingLink>(get_class());
        }
    } // namespace EntityPlaceholderScalingLink
} // namespace app::classes::types
