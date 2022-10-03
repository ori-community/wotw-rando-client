#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyConfigurationAttribute {
        namespace {
            app::AssemblyConfigurationAttribute__Class* type_info_ref = nullptr;
        }
        app::AssemblyConfigurationAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyConfigurationAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyConfigurationAttribute__Class>(type_info, "System.Reflection", "AssemblyConfigurationAttribute");
        }
        inline app::AssemblyConfigurationAttribute* create() {
            return il2cpp::create_object<app::AssemblyConfigurationAttribute>(get_class());
        }
    } // namespace AssemblyConfigurationAttribute
} // namespace app::classes::types
