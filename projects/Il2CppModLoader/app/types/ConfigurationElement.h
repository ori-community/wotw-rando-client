#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfigurationElement {
        namespace {
            inline app::ConfigurationElement__Class* type_info_ref = nullptr;
        }
        inline app::ConfigurationElement__Class** type_info = &type_info_ref;
        inline app::ConfigurationElement__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationElement__Class>(type_info, "System.Configuration", "ConfigurationElement");
        }
        inline app::ConfigurationElement* create() {
            return il2cpp::create_object<app::ConfigurationElement>(get_class());
        }
    } // namespace ConfigurationElement
} // namespace app::classes::types
