#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurationSection {
        namespace {
            app::ConfigurationSection__Class* type_info_ref = nullptr;
        }
        app::ConfigurationSection__Class** type_info = &type_info_ref;
        inline app::ConfigurationSection__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSection__Class>(type_info, "System.Configuration", "ConfigurationSection");
        }
        inline app::ConfigurationSection* create() {
            return il2cpp::create_object<app::ConfigurationSection>(get_class());
        }
    } // namespace ConfigurationSection
} // namespace app::classes::types
