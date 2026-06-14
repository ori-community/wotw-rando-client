#pragma once
#include <Modloader/app/structs/FPSCursorRenderer.h>
#include <Modloader/app/structs/FPSCursorRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSCursorRenderer {
        inline app::FPSCursorRenderer__Class** type_info() {
            static app::FPSCursorRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FPSCursorRenderer__Class**)(modloader::win::memory::resolve_rva(0x0474C2D8));
            }
            return cache;
        }
        inline app::FPSCursorRenderer__Class* get_class() {
            return il2cpp::get_class<app::FPSCursorRenderer__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "FPSCursorRenderer");
        }
        inline app::FPSCursorRenderer* create() {
            return il2cpp::create_object<app::FPSCursorRenderer>(get_class());
        }
    } // namespace FPSCursorRenderer
} // namespace app::classes::types
