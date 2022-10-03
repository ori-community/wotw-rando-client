#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExposedProperty__Array {
        namespace {
            app::ExposedProperty__Array__Class* type_info_ref = nullptr;
        }
        app::ExposedProperty__Array__Class** type_info = &type_info_ref;
        inline app::ExposedProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::ExposedProperty__Array__Class>(type_info, "Moon.ExposedPropertiesInspector", "ExposedProperty[]");
        }
        inline app::ExposedProperty__Array* create() {
            return il2cpp::create_object<app::ExposedProperty__Array>(get_class());
        }
    } // namespace ExposedProperty__Array
} // namespace app::classes::types
