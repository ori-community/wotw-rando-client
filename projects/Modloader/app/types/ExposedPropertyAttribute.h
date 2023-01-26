#pragma once
#include <Modloader/app/structs/ExposedPropertyAttribute.h>
#include <Modloader/app/structs/ExposedPropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExposedPropertyAttribute {
        inline app::ExposedPropertyAttribute__Class** type_info() {
            static app::ExposedPropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExposedPropertyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExposedPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExposedPropertyAttribute__Class>(type_info(), "Moon.ExposedPropertiesInspector", "ExposedPropertyAttribute");
        }
        inline app::ExposedPropertyAttribute* create() {
            return il2cpp::create_object<app::ExposedPropertyAttribute>(get_class());
        }
    } // namespace ExposedPropertyAttribute
} // namespace app::classes::types
