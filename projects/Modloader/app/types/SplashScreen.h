#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SplashScreen__Class.h>
#include <Modloader/app/structs/SplashScreen.h>

namespace app::classes::types {
    namespace SplashScreen {
        namespace {
            inline app::SplashScreen__Class* type_info_ref = nullptr;
        }
        inline app::SplashScreen__Class** type_info = &type_info_ref;
        inline app::SplashScreen__Class* get_class() {
            return il2cpp::get_class<app::SplashScreen__Class>(type_info, "UnityEngine.Rendering", "SplashScreen");
        }
        inline app::SplashScreen* create() {
            return il2cpp::create_object<app::SplashScreen>(get_class());
        }
    } // namespace SplashScreen
} // namespace app::classes::types
