#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverMenuItemTooltipController {
        namespace {
            inline app::CleverMenuItemTooltipController__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemTooltipController__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemTooltipController__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemTooltipController__Class>(type_info, "", "CleverMenuItemTooltipController");
        }
        inline app::CleverMenuItemTooltipController* create() {
            return il2cpp::create_object<app::CleverMenuItemTooltipController>(get_class());
        }
    } // namespace CleverMenuItemTooltipController
} // namespace app::classes::types
