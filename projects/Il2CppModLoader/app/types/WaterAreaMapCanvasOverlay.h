#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterAreaMapCanvasOverlay {
        namespace {
            app::WaterAreaMapCanvasOverlay__Class* type_info_ref = nullptr;
        }
        app::WaterAreaMapCanvasOverlay__Class** type_info = &type_info_ref;
        inline app::WaterAreaMapCanvasOverlay__Class* get_class() {
            return il2cpp::get_class<app::WaterAreaMapCanvasOverlay__Class>(type_info, "", "WaterAreaMapCanvasOverlay");
        }
        inline app::WaterAreaMapCanvasOverlay* create() {
            return il2cpp::create_object<app::WaterAreaMapCanvasOverlay>(get_class());
        }
    } // namespace WaterAreaMapCanvasOverlay
} // namespace app::classes::types
