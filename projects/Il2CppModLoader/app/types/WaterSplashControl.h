#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterSplashControl {
        namespace {
            app::WaterSplashControl__Class* type_info_ref = nullptr;
        }
        app::WaterSplashControl__Class** type_info = &type_info_ref;
        inline app::WaterSplashControl__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashControl__Class>(type_info, "", "WaterSplashControl");
        }
        inline app::WaterSplashControl* create() {
            return il2cpp::create_object<app::WaterSplashControl>(get_class());
        }
    } // namespace WaterSplashControl
} // namespace app::classes::types
