#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSCursorRenderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FPSCursorRenderer__Class** type_info;
        inline app::FPSCursorRenderer__Class* get_class() {
            return il2cpp::get_class<app::FPSCursorRenderer__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "FPSCursorRenderer");
        }
        inline app::FPSCursorRenderer* create() {
            return il2cpp::create_object<app::FPSCursorRenderer>(get_class());
        }
    } // namespace FPSCursorRenderer
} // namespace app::classes::types
