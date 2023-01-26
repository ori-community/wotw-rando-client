#pragma once
#include <Modloader/app/structs/ConfigurationSection.h>
#include <Modloader/app/structs/ConfigurationSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationSection {
        inline app::ConfigurationSection__Class** type_info() {
            static app::ConfigurationSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationSection__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSection__Class>(type_info(), "System.Configuration", "ConfigurationSection");
        }
        inline app::ConfigurationSection* create() {
            return il2cpp::create_object<app::ConfigurationSection>(get_class());
        }
    } // namespace ConfigurationSection
} // namespace app::classes::types
