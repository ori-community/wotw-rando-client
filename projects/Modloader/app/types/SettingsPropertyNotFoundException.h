#pragma once
#include <Modloader/app/structs/SettingsPropertyNotFoundException.h>
#include <Modloader/app/structs/SettingsPropertyNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyNotFoundException {
        inline app::SettingsPropertyNotFoundException__Class** type_info() {
            static app::SettingsPropertyNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsPropertyNotFoundException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsPropertyNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyNotFoundException__Class>(type_info(), "System.Configuration", "SettingsPropertyNotFoundException");
        }
        inline app::SettingsPropertyNotFoundException* create() {
            return il2cpp::create_object<app::SettingsPropertyNotFoundException>(get_class());
        }
    } // namespace SettingsPropertyNotFoundException
} // namespace app::classes::types
