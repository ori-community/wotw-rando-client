#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenOverlay {
        namespace {
            app::ScreenOverlay__Class* type_info_ref = nullptr;
        }
        app::ScreenOverlay__Class** type_info = &type_info_ref;
        inline app::ScreenOverlay__Class* get_class() {
            return il2cpp::get_class<app::ScreenOverlay__Class>(type_info, "UnityStandardAssets.ImageEffects", "ScreenOverlay");
        }
        inline app::ScreenOverlay* create() {
            return il2cpp::create_object<app::ScreenOverlay>(get_class());
        }
    } // namespace ScreenOverlay
} // namespace app::classes::types
