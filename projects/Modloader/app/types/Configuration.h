#pragma once
#include <Modloader/app/structs/Configuration.h>
#include <Modloader/app/structs/Configuration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Configuration {
        inline app::Configuration__Class** type_info() {
            static app::Configuration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Configuration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Configuration__Class* get_class() {
            return il2cpp::get_class<app::Configuration__Class>(type_info(), "System.Configuration", "Configuration");
        }
        inline app::Configuration* create() {
            return il2cpp::create_object<app::Configuration>(get_class());
        }
    } // namespace Configuration
} // namespace app::classes::types
