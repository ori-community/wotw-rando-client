#pragma once
#include <Modloader/app/structs/CursorRendererOverlay.h>
#include <Modloader/app/structs/CursorRendererOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CursorRendererOverlay {
        inline app::CursorRendererOverlay__Class** type_info() {
            static app::CursorRendererOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CursorRendererOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CursorRendererOverlay__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererOverlay__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "CursorRendererOverlay");
        }
        inline app::CursorRendererOverlay* create() {
            return il2cpp::create_object<app::CursorRendererOverlay>(get_class());
        }
    } // namespace CursorRendererOverlay
} // namespace app::classes::types
