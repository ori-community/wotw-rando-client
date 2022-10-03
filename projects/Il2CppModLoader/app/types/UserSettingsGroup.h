#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserSettingsGroup {
        namespace {
            app::UserSettingsGroup__Class* type_info_ref = nullptr;
        }
        app::UserSettingsGroup__Class** type_info = &type_info_ref;
        inline app::UserSettingsGroup__Class* get_class() {
            return il2cpp::get_class<app::UserSettingsGroup__Class>(type_info, "System.Configuration", "UserSettingsGroup");
        }
        inline app::UserSettingsGroup* create() {
            return il2cpp::create_object<app::UserSettingsGroup>(get_class());
        }
    } // namespace UserSettingsGroup
} // namespace app::classes::types
