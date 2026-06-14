#pragma once
#include <Modloader/app/structs/SettingsStringProvider.h>
#include <Modloader/app/structs/SettingsStringProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsStringProvider {
        inline app::SettingsStringProvider__Class** type_info() {
            static app::SettingsStringProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsStringProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsStringProvider__Class* get_class() {
            return il2cpp::get_class<app::SettingsStringProvider__Class>(type_info(), "", "SettingsStringProvider");
        }
        inline app::SettingsStringProvider* create() {
            return il2cpp::create_object<app::SettingsStringProvider>(get_class());
        }
    } // namespace SettingsStringProvider
} // namespace app::classes::types
