#pragma once
#include <Modloader/app/structs/ExposedProperty__Array.h>
#include <Modloader/app/structs/ExposedProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExposedProperty__Array {
        inline app::ExposedProperty__Array__Class** type_info() {
            static app::ExposedProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExposedProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExposedProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::ExposedProperty__Array__Class>(type_info(), "Moon.ExposedPropertiesInspector", "ExposedProperty[]");
        }
        inline app::ExposedProperty__Array* create() {
            return il2cpp::create_object<app::ExposedProperty__Array>(get_class());
        }
    } // namespace ExposedProperty__Array
} // namespace app::classes::types
