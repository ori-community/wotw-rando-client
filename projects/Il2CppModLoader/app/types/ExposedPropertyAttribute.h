#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExposedPropertyAttribute {
        namespace {
            app::ExposedPropertyAttribute__Class* type_info_ref = nullptr;
        }
        app::ExposedPropertyAttribute__Class** type_info = &type_info_ref;
        inline app::ExposedPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExposedPropertyAttribute__Class>(type_info, "Moon.ExposedPropertiesInspector", "ExposedPropertyAttribute");
        }
        inline app::ExposedPropertyAttribute* create() {
            return il2cpp::create_object<app::ExposedPropertyAttribute>(get_class());
        }
    } // namespace ExposedPropertyAttribute
} // namespace app::classes::types
