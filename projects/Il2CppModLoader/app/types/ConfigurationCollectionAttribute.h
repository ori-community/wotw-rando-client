#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurationCollectionAttribute {
        namespace {
            app::ConfigurationCollectionAttribute__Class* type_info_ref = nullptr;
        }
        app::ConfigurationCollectionAttribute__Class** type_info = &type_info_ref;
        inline app::ConfigurationCollectionAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationCollectionAttribute__Class>(type_info, "System.Configuration", "ConfigurationCollectionAttribute");
        }
        inline app::ConfigurationCollectionAttribute* create() {
            return il2cpp::create_object<app::ConfigurationCollectionAttribute>(get_class());
        }
    } // namespace ConfigurationCollectionAttribute
} // namespace app::classes::types
