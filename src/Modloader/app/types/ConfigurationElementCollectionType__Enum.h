#pragma once
#include <Modloader/app/structs/ConfigurationElementCollectionType__Enum.h>
#include <Modloader/app/structs/ConfigurationElementCollectionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationElementCollectionType__Enum {
        inline app::ConfigurationElementCollectionType__Enum__Class** type_info() {
            static app::ConfigurationElementCollectionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationElementCollectionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationElementCollectionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationElementCollectionType__Enum__Class>(type_info(), "System.Configuration", "ConfigurationElementCollectionType");
        }
        inline app::ConfigurationElementCollectionType__Enum* create() {
            return il2cpp::create_object<app::ConfigurationElementCollectionType__Enum>(get_class());
        }
    } // namespace ConfigurationElementCollectionType__Enum
} // namespace app::classes::types
