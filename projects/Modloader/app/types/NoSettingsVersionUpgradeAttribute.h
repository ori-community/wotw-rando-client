#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NoSettingsVersionUpgradeAttribute__Class.h>
#include <Modloader/app/structs/NoSettingsVersionUpgradeAttribute.h>

namespace app::classes::types {
    namespace NoSettingsVersionUpgradeAttribute {
        namespace {
            inline app::NoSettingsVersionUpgradeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NoSettingsVersionUpgradeAttribute__Class** type_info = &type_info_ref;
        inline app::NoSettingsVersionUpgradeAttribute__Class* get_class() {
            return il2cpp::get_class<app::NoSettingsVersionUpgradeAttribute__Class>(type_info, "System.Configuration", "NoSettingsVersionUpgradeAttribute");
        }
        inline app::NoSettingsVersionUpgradeAttribute* create() {
            return il2cpp::create_object<app::NoSettingsVersionUpgradeAttribute>(get_class());
        }
    } // namespace NoSettingsVersionUpgradeAttribute
} // namespace app::classes::types
