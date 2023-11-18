#pragma once
#include <Modloader/app/structs/ColorAttribute_1.h>
#include <Modloader/app/structs/ColorAttribute_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorAttribute_1 {
        inline app::ColorAttribute_1__Class** type_info() {
            static app::ColorAttribute_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorAttribute_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::ColorAttribute_1__Class>(type_info(), "Moon.ExposedPropertiesInspector", "ColorAttribute");
        }
        inline app::ColorAttribute_1* create() {
            return il2cpp::create_object<app::ColorAttribute_1>(get_class());
        }
    } // namespace ColorAttribute_1
} // namespace app::classes::types
