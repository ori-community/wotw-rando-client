#pragma once
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationPropertyCollection {
        inline app::ConfigurationPropertyCollection__Class** type_info() {
            static app::ConfigurationPropertyCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationPropertyCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationPropertyCollection__Class>(type_info(), "System.Configuration", "ConfigurationPropertyCollection");
        }
        inline app::ConfigurationPropertyCollection* create() {
            return il2cpp::create_object<app::ConfigurationPropertyCollection>(get_class());
        }
    } // namespace ConfigurationPropertyCollection
} // namespace app::classes::types
