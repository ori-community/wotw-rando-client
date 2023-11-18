#pragma once
#include <Modloader/app/structs/CleverMenuItemTooltipController.h>
#include <Modloader/app/structs/CleverMenuItemTooltipController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemTooltipController {
        inline app::CleverMenuItemTooltipController__Class** type_info() {
            static app::CleverMenuItemTooltipController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemTooltipController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemTooltipController__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemTooltipController__Class>(type_info(), "", "CleverMenuItemTooltipController");
        }
        inline app::CleverMenuItemTooltipController* create() {
            return il2cpp::create_object<app::CleverMenuItemTooltipController>(get_class());
        }
    } // namespace CleverMenuItemTooltipController
} // namespace app::classes::types
