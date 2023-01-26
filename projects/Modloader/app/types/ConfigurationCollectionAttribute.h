#pragma once
#include <Modloader/app/structs/ConfigurationCollectionAttribute.h>
#include <Modloader/app/structs/ConfigurationCollectionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationCollectionAttribute {
        inline app::ConfigurationCollectionAttribute__Class** type_info() {
            static app::ConfigurationCollectionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationCollectionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationCollectionAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationCollectionAttribute__Class>(type_info(), "System.Configuration", "ConfigurationCollectionAttribute");
        }
        inline app::ConfigurationCollectionAttribute* create() {
            return il2cpp::create_object<app::ConfigurationCollectionAttribute>(get_class());
        }
    } // namespace ConfigurationCollectionAttribute
} // namespace app::classes::types
