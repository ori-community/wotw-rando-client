#pragma once
#include <Modloader/app/structs/SettingsProperty.h>
#include <Modloader/app/structs/SettingsProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsProperty {
        inline app::SettingsProperty__Class** type_info() {
            static app::SettingsProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsProperty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsProperty__Class* get_class() {
            return il2cpp::get_class<app::SettingsProperty__Class>(type_info(), "System.Configuration", "SettingsProperty");
        }
        inline app::SettingsProperty* create() {
            return il2cpp::create_object<app::SettingsProperty>(get_class());
        }
    } // namespace SettingsProperty
} // namespace app::classes::types
