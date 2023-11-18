#pragma once
#include <Modloader/app/structs/SettingsSection.h>
#include <Modloader/app/structs/SettingsSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsSection {
        inline app::SettingsSection__Class** type_info() {
            static app::SettingsSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsSection__Class* get_class() {
            return il2cpp::get_class<app::SettingsSection__Class>(type_info(), "System.Net.Configuration", "SettingsSection");
        }
        inline app::SettingsSection* create() {
            return il2cpp::create_object<app::SettingsSection>(get_class());
        }
    } // namespace SettingsSection
} // namespace app::classes::types
