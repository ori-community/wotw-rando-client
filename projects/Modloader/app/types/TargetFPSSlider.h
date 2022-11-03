#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetFPSSlider {
        namespace {
            inline app::TargetFPSSlider__Class* type_info_ref = nullptr;
        }
        inline app::TargetFPSSlider__Class** type_info = &type_info_ref;
        inline app::TargetFPSSlider__Class* get_class() {
            return il2cpp::get_class<app::TargetFPSSlider__Class>(type_info, "", "TargetFPSSlider");
        }
        inline app::TargetFPSSlider* create() {
            return il2cpp::create_object<app::TargetFPSSlider>(get_class());
        }
    } // namespace TargetFPSSlider
} // namespace app::classes::types
