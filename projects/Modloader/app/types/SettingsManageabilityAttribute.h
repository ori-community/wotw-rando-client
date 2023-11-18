#pragma once
#include <Modloader/app/structs/SettingsManageabilityAttribute.h>
#include <Modloader/app/structs/SettingsManageabilityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsManageabilityAttribute {
        inline app::SettingsManageabilityAttribute__Class** type_info() {
            static app::SettingsManageabilityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsManageabilityAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsManageabilityAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsManageabilityAttribute__Class>(type_info(), "System.Configuration", "SettingsManageabilityAttribute");
        }
        inline app::SettingsManageabilityAttribute* create() {
            return il2cpp::create_object<app::SettingsManageabilityAttribute>(get_class());
        }
    } // namespace SettingsManageabilityAttribute
} // namespace app::classes::types
