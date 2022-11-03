#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeadZoneLeftStickSlider {
        namespace {
            inline app::DeadZoneLeftStickSlider__Class* type_info_ref = nullptr;
        }
        inline app::DeadZoneLeftStickSlider__Class** type_info = &type_info_ref;
        inline app::DeadZoneLeftStickSlider__Class* get_class() {
            return il2cpp::get_class<app::DeadZoneLeftStickSlider__Class>(type_info, "", "DeadZoneLeftStickSlider");
        }
        inline app::DeadZoneLeftStickSlider* create() {
            return il2cpp::create_object<app::DeadZoneLeftStickSlider>(get_class());
        }
    } // namespace DeadZoneLeftStickSlider
} // namespace app::classes::types
