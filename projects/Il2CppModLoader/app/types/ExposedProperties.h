#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExposedProperties {
        namespace {
            app::ExposedProperties__Class* type_info_ref = nullptr;
        }
        app::ExposedProperties__Class** type_info = &type_info_ref;
        inline app::ExposedProperties__Class* get_class() {
            return il2cpp::get_class<app::ExposedProperties__Class>(type_info, "Moon.ExposedPropertiesInspector", "ExposedProperties");
        }
        inline app::ExposedProperties* create() {
            return il2cpp::create_object<app::ExposedProperties>(get_class());
        }
    } // namespace ExposedProperties
} // namespace app::classes::types
