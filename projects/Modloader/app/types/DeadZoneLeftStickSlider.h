#pragma once
#include <Modloader/app/structs/DeadZoneLeftStickSlider.h>
#include <Modloader/app/structs/DeadZoneLeftStickSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadZoneLeftStickSlider {
        inline app::DeadZoneLeftStickSlider__Class** type_info() {
            static app::DeadZoneLeftStickSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadZoneLeftStickSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadZoneLeftStickSlider__Class* get_class() {
            return il2cpp::get_class<app::DeadZoneLeftStickSlider__Class>(type_info(), "", "DeadZoneLeftStickSlider");
        }
        inline app::DeadZoneLeftStickSlider* create() {
            return il2cpp::create_object<app::DeadZoneLeftStickSlider>(get_class());
        }
    } // namespace DeadZoneLeftStickSlider
} // namespace app::classes::types
