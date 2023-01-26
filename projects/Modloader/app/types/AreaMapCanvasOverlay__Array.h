#pragma once
#include <Modloader/app/structs/AreaMapCanvasOverlay__Array.h>
#include <Modloader/app/structs/AreaMapCanvasOverlay__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapCanvasOverlay__Array {
        inline app::AreaMapCanvasOverlay__Array__Class** type_info() {
            static app::AreaMapCanvasOverlay__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapCanvasOverlay__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapCanvasOverlay__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapCanvasOverlay__Array__Class>(type_info(), "", "AreaMapCanvasOverlay[]");
        }
        inline app::AreaMapCanvasOverlay__Array* create() {
            return il2cpp::create_object<app::AreaMapCanvasOverlay__Array>(get_class());
        }
    } // namespace AreaMapCanvasOverlay__Array
} // namespace app::classes::types
