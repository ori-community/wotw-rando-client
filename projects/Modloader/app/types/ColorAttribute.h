#pragma once
#include <Modloader/app/structs/ColorAttribute.h>
#include <Modloader/app/structs/ColorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorAttribute {
        inline app::ColorAttribute__Class** type_info() {
            static app::ColorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorAttribute__Class* get_class() {
            return il2cpp::get_class<app::ColorAttribute__Class>(type_info(), "Moon.BehaviourSystem.BTEditor", "ColorAttribute");
        }
        inline app::ColorAttribute* create() {
            return il2cpp::create_object<app::ColorAttribute>(get_class());
        }
    } // namespace ColorAttribute
} // namespace app::classes::types
