#pragma once
#include <Modloader/app/structs/ScreenOverlay.h>
#include <Modloader/app/structs/ScreenOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenOverlay {
        inline app::ScreenOverlay__Class** type_info() {
            static app::ScreenOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenOverlay__Class* get_class() {
            return il2cpp::get_class<app::ScreenOverlay__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ScreenOverlay");
        }
        inline app::ScreenOverlay* create() {
            return il2cpp::create_object<app::ScreenOverlay>(get_class());
        }
    } // namespace ScreenOverlay
} // namespace app::classes::types
