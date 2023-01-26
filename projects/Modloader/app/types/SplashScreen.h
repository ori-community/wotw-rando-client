#pragma once
#include <Modloader/app/structs/SplashScreen.h>
#include <Modloader/app/structs/SplashScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplashScreen {
        inline app::SplashScreen__Class** type_info() {
            static app::SplashScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplashScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplashScreen__Class* get_class() {
            return il2cpp::get_class<app::SplashScreen__Class>(type_info(), "UnityEngine.Rendering", "SplashScreen");
        }
        inline app::SplashScreen* create() {
            return il2cpp::create_object<app::SplashScreen>(get_class());
        }
    } // namespace SplashScreen
} // namespace app::classes::types
