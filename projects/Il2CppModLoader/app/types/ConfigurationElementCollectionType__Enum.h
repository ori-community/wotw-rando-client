#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurationElementCollectionType__Enum {
        namespace {
            app::ConfigurationElementCollectionType__Enum__Class* type_info_ref = nullptr;
        }
        app::ConfigurationElementCollectionType__Enum__Class** type_info = &type_info_ref;
        inline app::ConfigurationElementCollectionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationElementCollectionType__Enum__Class>(type_info, "System.Configuration", "ConfigurationElementCollectionType");
        }
        inline app::ConfigurationElementCollectionType__Enum* create() {
            return il2cpp::create_object<app::ConfigurationElementCollectionType__Enum>(get_class());
        }
    } // namespace ConfigurationElementCollectionType__Enum
} // namespace app::classes::types
