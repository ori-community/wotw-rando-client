#pragma once
#include <Modloader/app/structs/ToggleSettingsAction.h>
#include <Modloader/app/structs/ToggleSettingsAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToggleSettingsAction {
        inline app::ToggleSettingsAction__Class** type_info() {
            static app::ToggleSettingsAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ToggleSettingsAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ToggleSettingsAction__Class* get_class() {
            return il2cpp::get_class<app::ToggleSettingsAction__Class>(type_info(), "", "ToggleSettingsAction");
        }
        inline app::ToggleSettingsAction* create() {
            return il2cpp::create_object<app::ToggleSettingsAction>(get_class());
        }
    } // namespace ToggleSettingsAction
} // namespace app::classes::types
