#pragma once
#include <Modloader/app/structs/HDRRichnessSlider.h>
#include <Modloader/app/structs/HDRRichnessSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDRRichnessSlider {
        inline app::HDRRichnessSlider__Class** type_info() {
            static app::HDRRichnessSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HDRRichnessSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HDRRichnessSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRRichnessSlider__Class>(type_info(), "", "HDRRichnessSlider");
        }
        inline app::HDRRichnessSlider* create() {
            return il2cpp::create_object<app::HDRRichnessSlider>(get_class());
        }
    } // namespace HDRRichnessSlider
} // namespace app::classes::types
