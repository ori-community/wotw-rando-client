#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemTooltip {
        namespace {
            app::CleverMenuItemTooltip__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItemTooltip__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemTooltip__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemTooltip__Class>(type_info, "", "CleverMenuItemTooltip");
        }
        inline app::CleverMenuItemTooltip* create() {
            return il2cpp::create_object<app::CleverMenuItemTooltip>(get_class());
        }
    } // namespace CleverMenuItemTooltip
} // namespace app::classes::types
