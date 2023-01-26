#pragma once
#include <Modloader/app/structs/CleverMenuItemTooltip.h>
#include <Modloader/app/structs/CleverMenuItemTooltip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemTooltip {
        inline app::CleverMenuItemTooltip__Class** type_info() {
            static app::CleverMenuItemTooltip__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemTooltip__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemTooltip__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemTooltip__Class>(type_info(), "", "CleverMenuItemTooltip");
        }
        inline app::CleverMenuItemTooltip* create() {
            return il2cpp::create_object<app::CleverMenuItemTooltip>(get_class());
        }
    } // namespace CleverMenuItemTooltip
} // namespace app::classes::types
