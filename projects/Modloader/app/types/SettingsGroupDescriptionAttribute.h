#pragma once
#include <Modloader/app/structs/SettingsGroupDescriptionAttribute.h>
#include <Modloader/app/structs/SettingsGroupDescriptionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsGroupDescriptionAttribute {
        inline app::SettingsGroupDescriptionAttribute__Class** type_info() {
            static app::SettingsGroupDescriptionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsGroupDescriptionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsGroupDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsGroupDescriptionAttribute__Class>(type_info(), "System.Configuration", "SettingsGroupDescriptionAttribute");
        }
        inline app::SettingsGroupDescriptionAttribute* create() {
            return il2cpp::create_object<app::SettingsGroupDescriptionAttribute>(get_class());
        }
    } // namespace SettingsGroupDescriptionAttribute
} // namespace app::classes::types
