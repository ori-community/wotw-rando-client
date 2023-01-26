#pragma once
#include <Modloader/app/structs/ConfigurationSettings.h>
#include <Modloader/app/structs/ConfigurationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationSettings {
        inline app::ConfigurationSettings__Class** type_info() {
            static app::ConfigurationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationSettings__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSettings__Class>(type_info(), "System.Configuration", "ConfigurationSettings");
        }
        inline app::ConfigurationSettings* create() {
            return il2cpp::create_object<app::ConfigurationSettings>(get_class());
        }
    } // namespace ConfigurationSettings
} // namespace app::classes::types
