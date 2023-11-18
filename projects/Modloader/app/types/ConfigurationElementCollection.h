#pragma once
#include <Modloader/app/structs/ConfigurationElementCollection.h>
#include <Modloader/app/structs/ConfigurationElementCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationElementCollection {
        inline app::ConfigurationElementCollection__Class** type_info() {
            static app::ConfigurationElementCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationElementCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationElementCollection__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationElementCollection__Class>(type_info(), "System.Configuration", "ConfigurationElementCollection");
        }
        inline app::ConfigurationElementCollection* create() {
            return il2cpp::create_object<app::ConfigurationElementCollection>(get_class());
        }
    } // namespace ConfigurationElementCollection
} // namespace app::classes::types
