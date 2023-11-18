#pragma once
#include <Modloader/app/structs/WaterSplashEffect__Array.h>
#include <Modloader/app/structs/WaterSplashEffect__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSplashEffect__Array {
        inline app::WaterSplashEffect__Array__Class** type_info() {
            static app::WaterSplashEffect__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSplashEffect__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSplashEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashEffect__Array__Class>(type_info(), "", "WaterSplashEffect[]");
        }
        inline app::WaterSplashEffect__Array* create() {
            return il2cpp::create_object<app::WaterSplashEffect__Array>(get_class());
        }
    } // namespace WaterSplashEffect__Array
} // namespace app::classes::types
