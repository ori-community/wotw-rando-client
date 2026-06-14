#pragma once
#include <Modloader/app/structs/SettingsProvider.h>
#include <Modloader/app/structs/SettingsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsProvider {
        inline app::SettingsProvider__Class** type_info() {
            static app::SettingsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsProvider__Class* get_class() {
            return il2cpp::get_class<app::SettingsProvider__Class>(type_info(), "System.Configuration", "SettingsProvider");
        }
        inline app::SettingsProvider* create() {
            return il2cpp::create_object<app::SettingsProvider>(get_class());
        }
    } // namespace SettingsProvider
} // namespace app::classes::types
