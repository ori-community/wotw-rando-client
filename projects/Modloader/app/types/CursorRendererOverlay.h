#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CursorRendererOverlay {
        namespace {
            inline app::CursorRendererOverlay__Class* type_info_ref = nullptr;
        }
        inline app::CursorRendererOverlay__Class** type_info = &type_info_ref;
        inline app::CursorRendererOverlay__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererOverlay__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CursorRendererOverlay");
        }
        inline app::CursorRendererOverlay* create() {
            return il2cpp::create_object<app::CursorRendererOverlay>(get_class());
        }
    } // namespace CursorRendererOverlay
} // namespace app::classes::types
