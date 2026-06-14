#pragma once
#include <Modloader/app/structs/WaterSplashControl.h>
#include <Modloader/app/structs/WaterSplashControl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSplashControl {
        inline app::WaterSplashControl__Class** type_info() {
            static app::WaterSplashControl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSplashControl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSplashControl__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashControl__Class>(type_info(), "", "WaterSplashControl");
        }
        inline app::WaterSplashControl* create() {
            return il2cpp::create_object<app::WaterSplashControl>(get_class());
        }
    } // namespace WaterSplashControl
} // namespace app::classes::types
