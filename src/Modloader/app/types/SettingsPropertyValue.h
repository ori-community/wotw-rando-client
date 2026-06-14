#pragma once
#include <Modloader/app/structs/SettingsPropertyValue.h>
#include <Modloader/app/structs/SettingsPropertyValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyValue {
        inline app::SettingsPropertyValue__Class** type_info() {
            static app::SettingsPropertyValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsPropertyValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsPropertyValue__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyValue__Class>(type_info(), "System.Configuration", "SettingsPropertyValue");
        }
        inline app::SettingsPropertyValue* create() {
            return il2cpp::create_object<app::SettingsPropertyValue>(get_class());
        }
    } // namespace SettingsPropertyValue
} // namespace app::classes::types
