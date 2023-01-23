#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AssemblyConfigurationAttribute__Class.h>
#include <Modloader/app/structs/AssemblyConfigurationAttribute.h>

namespace app::classes::types {
    namespace AssemblyConfigurationAttribute {
        namespace {
            inline app::AssemblyConfigurationAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyConfigurationAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyConfigurationAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyConfigurationAttribute__Class>(type_info, "System.Reflection", "AssemblyConfigurationAttribute");
        }
        inline app::AssemblyConfigurationAttribute* create() {
            return il2cpp::create_object<app::AssemblyConfigurationAttribute>(get_class());
        }
    } // namespace AssemblyConfigurationAttribute
} // namespace app::classes::types
