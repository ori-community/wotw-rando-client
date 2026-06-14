#pragma once
#include <Modloader/app/structs/NoSettingsVersionUpgradeAttribute.h>
#include <Modloader/app/structs/NoSettingsVersionUpgradeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoSettingsVersionUpgradeAttribute {
        inline app::NoSettingsVersionUpgradeAttribute__Class** type_info() {
            static app::NoSettingsVersionUpgradeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NoSettingsVersionUpgradeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NoSettingsVersionUpgradeAttribute__Class* get_class() {
            return il2cpp::get_class<app::NoSettingsVersionUpgradeAttribute__Class>(type_info(), "System.Configuration", "NoSettingsVersionUpgradeAttribute");
        }
        inline app::NoSettingsVersionUpgradeAttribute* create() {
            return il2cpp::create_object<app::NoSettingsVersionUpgradeAttribute>(get_class());
        }
    } // namespace NoSettingsVersionUpgradeAttribute
} // namespace app::classes::types
