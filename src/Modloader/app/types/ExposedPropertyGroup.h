#pragma once
#include <Modloader/app/structs/ExposedPropertyGroup.h>
#include <Modloader/app/structs/ExposedPropertyGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExposedPropertyGroup {
        inline app::ExposedPropertyGroup__Class** type_info() {
            static app::ExposedPropertyGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExposedPropertyGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExposedPropertyGroup__Class* get_class() {
            return il2cpp::get_class<app::ExposedPropertyGroup__Class>(type_info(), "Moon.ExposedPropertiesInspector", "ExposedPropertyGroup");
        }
        inline app::ExposedPropertyGroup* create() {
            return il2cpp::create_object<app::ExposedPropertyGroup>(get_class());
        }
    } // namespace ExposedPropertyGroup
} // namespace app::classes::types
