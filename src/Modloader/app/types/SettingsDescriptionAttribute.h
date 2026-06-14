#pragma once
#include <Modloader/app/structs/SettingsDescriptionAttribute.h>
#include <Modloader/app/structs/SettingsDescriptionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsDescriptionAttribute {
        inline app::SettingsDescriptionAttribute__Class** type_info() {
            static app::SettingsDescriptionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsDescriptionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsDescriptionAttribute__Class>(type_info(), "System.Configuration", "SettingsDescriptionAttribute");
        }
        inline app::SettingsDescriptionAttribute* create() {
            return il2cpp::create_object<app::SettingsDescriptionAttribute>(get_class());
        }
    } // namespace SettingsDescriptionAttribute
} // namespace app::classes::types
