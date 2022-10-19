#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Configuration {
        namespace {
            inline app::Configuration__Class* type_info_ref = nullptr;
        }
        inline app::Configuration__Class** type_info = &type_info_ref;
        inline app::Configuration__Class* get_class() {
            return il2cpp::get_class<app::Configuration__Class>(type_info, "System.Configuration", "Configuration");
        }
        inline app::Configuration* create() {
            return il2cpp::create_object<app::Configuration>(get_class());
        }
    } // namespace Configuration
} // namespace app::classes::types
