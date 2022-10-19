#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterSplashEffect {
        namespace {
            inline app::WaterSplashEffect__Class* type_info_ref = nullptr;
        }
        inline app::WaterSplashEffect__Class** type_info = &type_info_ref;
        inline app::WaterSplashEffect__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashEffect__Class>(type_info, "", "WaterSplashEffect");
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
