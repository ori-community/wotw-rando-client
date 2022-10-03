#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResetSettingsToDefaultAction {
        namespace {
            app::ResetSettingsToDefaultAction__Class* type_info_ref = nullptr;
        }
        app::ResetSettingsToDefaultAction__Class** type_info = &type_info_ref;
        inline app::ResetSettingsToDefaultAction__Class* get_class() {
            return il2cpp::get_class<app::ResetSettingsToDefaultAction__Class>(type_info, "", "ResetSettingsToDefaultAction");
        }
        inline app::ResetSettingsToDefaultAction* create() {
            return il2cpp::create_object<app::ResetSettingsToDefaultAction>(get_class());
        }
    } // namespace ResetSettingsToDefaultAction
} // namespace app::classes::types
