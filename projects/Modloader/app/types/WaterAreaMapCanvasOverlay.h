#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterAreaMapCanvasOverlay__Class.h>
#include <Modloader/app/structs/WaterAreaMapCanvasOverlay.h>

namespace app::classes::types {
    namespace WaterAreaMapCanvasOverlay {
        namespace {
            inline app::WaterAreaMapCanvasOverlay__Class* type_info_ref = nullptr;
        }
        inline app::WaterAreaMapCanvasOverlay__Class** type_info = &type_info_ref;
        inline app::WaterAreaMapCanvasOverlay__Class* get_class() {
            return il2cpp::get_class<app::WaterAreaMapCanvasOverlay__Class>(type_info, "", "WaterAreaMapCanvasOverlay");
        }
        inline app::WaterAreaMapCanvasOverlay* create() {
            return il2cpp::create_object<app::WaterAreaMapCanvasOverlay>(get_class());
        }
    } // namespace WaterAreaMapCanvasOverlay
} // namespace app::classes::types
