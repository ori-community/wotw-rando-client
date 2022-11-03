#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VibrationSlider {
        namespace {
            inline app::VibrationSlider__Class* type_info_ref = nullptr;
        }
        inline app::VibrationSlider__Class** type_info = &type_info_ref;
        inline app::VibrationSlider__Class* get_class() {
            return il2cpp::get_class<app::VibrationSlider__Class>(type_info, "", "VibrationSlider");
        }
        inline app::VibrationSlider* create() {
            return il2cpp::create_object<app::VibrationSlider>(get_class());
        }
    } // namespace VibrationSlider
} // namespace app::classes::types
