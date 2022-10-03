#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HDRRichnessSlider {
        namespace {
            app::HDRRichnessSlider__Class* type_info_ref = nullptr;
        }
        app::HDRRichnessSlider__Class** type_info = &type_info_ref;
        inline app::HDRRichnessSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRRichnessSlider__Class>(type_info, "", "HDRRichnessSlider");
        }
        inline app::HDRRichnessSlider* create() {
            return il2cpp::create_object<app::HDRRichnessSlider>(get_class());
        }
    } // namespace HDRRichnessSlider
} // namespace app::classes::types
