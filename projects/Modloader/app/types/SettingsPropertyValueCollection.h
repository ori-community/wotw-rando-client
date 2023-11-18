#pragma once
#include <Modloader/app/structs/SettingsPropertyValueCollection.h>
#include <Modloader/app/structs/SettingsPropertyValueCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyValueCollection {
        inline app::SettingsPropertyValueCollection__Class** type_info() {
            static app::SettingsPropertyValueCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsPropertyValueCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsPropertyValueCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyValueCollection__Class>(type_info(), "System.Configuration", "SettingsPropertyValueCollection");
        }
        inline app::SettingsPropertyValueCollection* create() {
            return il2cpp::create_object<app::SettingsPropertyValueCollection>(get_class());
        }
    } // namespace SettingsPropertyValueCollection
} // namespace app::classes::types
