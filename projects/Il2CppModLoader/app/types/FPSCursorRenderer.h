#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSCursorRenderer {
        inline app::FPSCursorRenderer__Class** type_info = (app::FPSCursorRenderer__Class**)(modloader::win::memory::resolve_rva(0x0474C2D8));
        inline app::FPSCursorRenderer__Class* get_class() {
            return il2cpp::get_class<app::FPSCursorRenderer__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "FPSCursorRenderer");
        }
        inline app::FPSCursorRenderer* create() {
            return il2cpp::create_object<app::FPSCursorRenderer>(get_class());
        }
    } // namespace FPSCursorRenderer
} // namespace app::classes::types
