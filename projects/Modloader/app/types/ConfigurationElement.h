#pragma once
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationElement {
        inline app::ConfigurationElement__Class** type_info() {
            static app::ConfigurationElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationElement__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationElement__Class>(type_info(), "System.Configuration", "ConfigurationElement");
        }
        inline app::ConfigurationElement* create() {
            return il2cpp::create_object<app::ConfigurationElement>(get_class());
        }
    } // namespace ConfigurationElement
} // namespace app::classes::types
