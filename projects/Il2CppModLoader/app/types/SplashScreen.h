#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplashScreen {
        namespace {
            app::SplashScreen__Class* type_info_ref = nullptr;
        }
        app::SplashScreen__Class** type_info = &type_info_ref;
        inline app::SplashScreen__Class* get_class() {
            return il2cpp::get_class<app::SplashScreen__Class>(type_info, "UnityEngine.Rendering", "SplashScreen");
        }
        inline app::SplashScreen* create() {
            return il2cpp::create_object<app::SplashScreen>(get_class());
        }
    } // namespace SplashScreen
} // namespace app::classes::types
