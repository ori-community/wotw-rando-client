#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterSplashObject_SplashPoint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaterSplashObject_SplashPoint__Array__Class** type_info;
        inline app::WaterSplashObject_SplashPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashObject_SplashPoint__Array__Class>(type_info, "", "WaterSplashObject+SplashPoint[]");
        }
        inline app::WaterSplashObject_SplashPoint__Array* create() {
            return il2cpp::create_object<app::WaterSplashObject_SplashPoint__Array>(get_class());
        }
    } // namespace WaterSplashObject_SplashPoint__Array
} // namespace app::classes::types
