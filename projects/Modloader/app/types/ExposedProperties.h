#pragma once
#include <Modloader/app/structs/ExposedProperties.h>
#include <Modloader/app/structs/ExposedProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExposedProperties {
        inline app::ExposedProperties__Class** type_info() {
            static app::ExposedProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExposedProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExposedProperties__Class* get_class() {
            return il2cpp::get_class<app::ExposedProperties__Class>(type_info(), "Moon.ExposedPropertiesInspector", "ExposedProperties");
        }
        inline app::ExposedProperties* create() {
            return il2cpp::create_object<app::ExposedProperties>(get_class());
        }
    } // namespace ExposedProperties
} // namespace app::classes::types
