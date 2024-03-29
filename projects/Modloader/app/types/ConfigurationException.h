#pragma once
#include <Modloader/app/structs/ConfigurationException.h>
#include <Modloader/app/structs/ConfigurationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationException {
        inline app::ConfigurationException__Class** type_info() {
            static app::ConfigurationException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationException__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationException__Class>(type_info(), "System.Configuration", "ConfigurationException");
        }
        inline app::ConfigurationException* create() {
            return il2cpp::create_object<app::ConfigurationException>(get_class());
        }
    } // namespace ConfigurationException
} // namespace app::classes::types
