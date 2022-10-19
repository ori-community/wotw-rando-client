#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfigurationSettings {
        namespace {
            inline app::ConfigurationSettings__Class* type_info_ref = nullptr;
        }
        inline app::ConfigurationSettings__Class** type_info = &type_info_ref;
        inline app::ConfigurationSettings__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSettings__Class>(type_info, "System.Configuration", "ConfigurationSettings");
        }
        inline app::ConfigurationSettings* create() {
            return il2cpp::create_object<app::ConfigurationSettings>(get_class());
        }
    } // namespace ConfigurationSettings
} // namespace app::classes::types
