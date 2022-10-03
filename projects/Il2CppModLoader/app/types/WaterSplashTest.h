#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterSplashTest {
        namespace {
            app::WaterSplashTest__Class* type_info_ref = nullptr;
        }
        app::WaterSplashTest__Class** type_info = &type_info_ref;
        inline app::WaterSplashTest__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashTest__Class>(type_info, "", "WaterSplashTest");
        }
        inline app::WaterSplashTest* create() {
            return il2cpp::create_object<app::WaterSplashTest>(get_class());
        }
    } // namespace WaterSplashTest
} // namespace app::classes::types
