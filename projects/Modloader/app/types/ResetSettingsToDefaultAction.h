#pragma once
#include <Modloader/app/structs/ResetSettingsToDefaultAction.h>
#include <Modloader/app/structs/ResetSettingsToDefaultAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResetSettingsToDefaultAction {
        inline app::ResetSettingsToDefaultAction__Class** type_info() {
            static app::ResetSettingsToDefaultAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResetSettingsToDefaultAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResetSettingsToDefaultAction__Class* get_class() {
            return il2cpp::get_class<app::ResetSettingsToDefaultAction__Class>(type_info(), "", "ResetSettingsToDefaultAction");
        }
        inline app::ResetSettingsToDefaultAction* create() {
            return il2cpp::create_object<app::ResetSettingsToDefaultAction>(get_class());
        }
    } // namespace ResetSettingsToDefaultAction
} // namespace app::classes::types
