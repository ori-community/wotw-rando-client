#pragma once
#include <Modloader/app/structs/ShaderID_ScreenOverlay.h>
#include <Modloader/app/structs/ShaderID_ScreenOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ScreenOverlay {
        inline app::ShaderID_ScreenOverlay__Class** type_info() {
            static app::ShaderID_ScreenOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ScreenOverlay__Class**)(modloader::win::memory::resolve_rva(0x04783948));
            }
            return cache;
        }
        inline app::ShaderID_ScreenOverlay__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ScreenOverlay__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_ScreenOverlay");
        }
        inline app::ShaderID_ScreenOverlay* create() {
            return il2cpp::create_object<app::ShaderID_ScreenOverlay>(get_class());
        }
    } // namespace ShaderID_ScreenOverlay
} // namespace app::classes::types
