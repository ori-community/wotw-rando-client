#pragma once
#include <Modloader/app/structs/CleverValueSlider.h>
#include <Modloader/app/structs/CleverValueSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverValueSlider {
        inline app::CleverValueSlider__Class** type_info() {
            static app::CleverValueSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverValueSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverValueSlider__Class* get_class() {
            return il2cpp::get_class<app::CleverValueSlider__Class>(type_info(), "", "CleverValueSlider");
        }
        inline app::CleverValueSlider* create() {
            return il2cpp::create_object<app::CleverValueSlider>(get_class());
        }
    } // namespace CleverValueSlider
} // namespace app::classes::types
