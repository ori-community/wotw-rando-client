#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaturationSlider {
        namespace {
            app::SaturationSlider__Class* type_info_ref = nullptr;
        }
        app::SaturationSlider__Class** type_info = &type_info_ref;
        inline app::SaturationSlider__Class* get_class() {
            return il2cpp::get_class<app::SaturationSlider__Class>(type_info, "", "SaturationSlider");
        }
        inline app::SaturationSlider* create() {
            return il2cpp::create_object<app::SaturationSlider>(get_class());
        }
    } // namespace SaturationSlider
} // namespace app::classes::types
