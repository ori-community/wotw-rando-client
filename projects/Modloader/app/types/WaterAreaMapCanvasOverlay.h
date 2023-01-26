#pragma once
#include <Modloader/app/structs/WaterAreaMapCanvasOverlay.h>
#include <Modloader/app/structs/WaterAreaMapCanvasOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterAreaMapCanvasOverlay {
        inline app::WaterAreaMapCanvasOverlay__Class** type_info() {
            static app::WaterAreaMapCanvasOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterAreaMapCanvasOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterAreaMapCanvasOverlay__Class* get_class() {
            return il2cpp::get_class<app::WaterAreaMapCanvasOverlay__Class>(type_info(), "", "WaterAreaMapCanvasOverlay");
        }
        inline app::WaterAreaMapCanvasOverlay* create() {
            return il2cpp::create_object<app::WaterAreaMapCanvasOverlay>(get_class());
        }
    } // namespace WaterAreaMapCanvasOverlay
} // namespace app::classes::types
