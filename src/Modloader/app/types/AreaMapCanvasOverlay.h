#pragma once
#include <Modloader/app/structs/AreaMapCanvasOverlay.h>
#include <Modloader/app/structs/AreaMapCanvasOverlay__Array.h>
#include <Modloader/app/structs/AreaMapCanvasOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapCanvasOverlay {
        inline app::AreaMapCanvasOverlay__Class** type_info() {
            static app::AreaMapCanvasOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapCanvasOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapCanvasOverlay__Class* get_class() {
            return il2cpp::get_class<app::AreaMapCanvasOverlay__Class>(type_info(), "", "AreaMapCanvasOverlay");
        }
        inline app::AreaMapCanvasOverlay* create() {
            return il2cpp::create_object<app::AreaMapCanvasOverlay>(get_class());
        }
        inline app::AreaMapCanvasOverlay__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapCanvasOverlay__Array>(get_class(), size);
        }
        inline app::AreaMapCanvasOverlay__Array* create_array(const std::vector<app::AreaMapCanvasOverlay*>& items) {
            return il2cpp::array_new<app::AreaMapCanvasOverlay__Array>(get_class(), items);
        }
    } // namespace AreaMapCanvasOverlay
} // namespace app::classes::types
