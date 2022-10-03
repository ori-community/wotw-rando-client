#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsManageabilityAttribute {
        namespace {
            app::SettingsManageabilityAttribute__Class* type_info_ref = nullptr;
        }
        app::SettingsManageabilityAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsManageabilityAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsManageabilityAttribute__Class>(type_info, "System.Configuration", "SettingsManageabilityAttribute");
        }
        inline app::SettingsManageabilityAttribute* create() {
            return il2cpp::create_object<app::SettingsManageabilityAttribute>(get_class());
        }
    } // namespace SettingsManageabilityAttribute
} // namespace app::classes::types
