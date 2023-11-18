#pragma once
#include <Modloader/app/structs/WaterSplashEffect.h>
#include <Modloader/app/structs/WaterSplashEffect__Array.h>
#include <Modloader/app/structs/WaterSplashEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSplashEffect {
        inline app::WaterSplashEffect__Class** type_info() {
            static app::WaterSplashEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSplashEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSplashEffect__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashEffect__Class>(type_info(), "", "WaterSplashEffect");
        }
        inline app::WaterSplashEffect* create() {
            return il2cpp::create_object<app::WaterSplashEffect>(get_class());
        }
        inline app::WaterSplashEffect__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterSplashEffect__Array>(get_class(), size);
        }
        inline app::WaterSplashEffect__Array* create_array(const std::vector<app::WaterSplashEffect*>& items) {
            return il2cpp::array_new<app::WaterSplashEffect__Array>(get_class(), items);
        }
    } // namespace WaterSplashEffect
} // namespace app::classes::types
