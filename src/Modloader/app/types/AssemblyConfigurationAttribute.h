#pragma once
#include <Modloader/app/structs/AssemblyConfigurationAttribute.h>
#include <Modloader/app/structs/AssemblyConfigurationAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyConfigurationAttribute {
        inline app::AssemblyConfigurationAttribute__Class** type_info() {
            static app::AssemblyConfigurationAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyConfigurationAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyConfigurationAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyConfigurationAttribute__Class>(type_info(), "System.Reflection", "AssemblyConfigurationAttribute");
        }
        inline app::AssemblyConfigurationAttribute* create() {
            return il2cpp::create_object<app::AssemblyConfigurationAttribute>(get_class());
        }
    } // namespace AssemblyConfigurationAttribute
} // namespace app::classes::types
