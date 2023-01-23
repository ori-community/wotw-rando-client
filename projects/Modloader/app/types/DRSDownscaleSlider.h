#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DRSDownscaleSlider__Class.h>
#include <Modloader/app/structs/DRSDownscaleSlider.h>

namespace app::classes::types {
    namespace DRSDownscaleSlider {
        namespace {
            inline app::DRSDownscaleSlider__Class* type_info_ref = nullptr;
        }
        inline app::DRSDownscaleSlider__Class** type_info = &type_info_ref;
        inline app::DRSDownscaleSlider__Class* get_class() {
            return il2cpp::get_class<app::DRSDownscaleSlider__Class>(type_info, "", "DRSDownscaleSlider");
        }
        inline app::DRSDownscaleSlider* create() {
            return il2cpp::create_object<app::DRSDownscaleSlider>(get_class());
        }
    } // namespace DRSDownscaleSlider
} // namespace app::classes::types
