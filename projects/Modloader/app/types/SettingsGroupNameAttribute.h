#pragma once
#include <Modloader/app/structs/SettingsGroupNameAttribute.h>
#include <Modloader/app/structs/SettingsGroupNameAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsGroupNameAttribute {
        inline app::SettingsGroupNameAttribute__Class** type_info() {
            static app::SettingsGroupNameAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsGroupNameAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsGroupNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsGroupNameAttribute__Class>(type_info(), "System.Configuration", "SettingsGroupNameAttribute");
        }
        inline app::SettingsGroupNameAttribute* create() {
            return il2cpp::create_object<app::SettingsGroupNameAttribute>(get_class());
        }
    } // namespace SettingsGroupNameAttribute
} // namespace app::classes::types
