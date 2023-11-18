#pragma once
#include <Modloader/app/structs/WaterSplashTest.h>
#include <Modloader/app/structs/WaterSplashTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSplashTest {
        inline app::WaterSplashTest__Class** type_info() {
            static app::WaterSplashTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSplashTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSplashTest__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashTest__Class>(type_info(), "", "WaterSplashTest");
        }
        inline app::WaterSplashTest* create() {
            return il2cpp::create_object<app::WaterSplashTest>(get_class());
        }
    } // namespace WaterSplashTest
} // namespace app::classes::types
