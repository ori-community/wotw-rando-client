#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurationElementCollection {
        namespace {
            app::ConfigurationElementCollection__Class* type_info_ref = nullptr;
        }
        app::ConfigurationElementCollection__Class** type_info = &type_info_ref;
        inline app::ConfigurationElementCollection__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationElementCollection__Class>(type_info, "System.Configuration", "ConfigurationElementCollection");
        }
        inline app::ConfigurationElementCollection* create() {
            return il2cpp::create_object<app::ConfigurationElementCollection>(get_class());
        }
    } // namespace ConfigurationElementCollection
} // namespace app::classes::types
