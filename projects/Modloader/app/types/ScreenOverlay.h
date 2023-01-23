#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScreenOverlay__Class.h>
#include <Modloader/app/structs/ScreenOverlay.h>

namespace app::classes::types {
    namespace ScreenOverlay {
        namespace {
            inline app::ScreenOverlay__Class* type_info_ref = nullptr;
        }
        inline app::ScreenOverlay__Class** type_info = &type_info_ref;
        inline app::ScreenOverlay__Class* get_class() {
            return il2cpp::get_class<app::ScreenOverlay__Class>(type_info, "UnityStandardAssets.ImageEffects", "ScreenOverlay");
        }
        inline app::ScreenOverlay* create() {
            return il2cpp::create_object<app::ScreenOverlay>(get_class());
        }
    } // namespace ScreenOverlay
} // namespace app::classes::types
