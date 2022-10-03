#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CursorRendererBase_Setup_d_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CursorRendererBase_Setup_d_2__Class** type_info;
        inline app::CursorRendererBase_Setup_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::CursorRendererBase_Setup_d_2__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CursorRendererBase", "<Setup>d__2");
        }
        inline app::CursorRendererBase_Setup_d_2* create() {
            return il2cpp::create_object<app::CursorRendererBase_Setup_d_2>(get_class());
        }
    } // namespace CursorRendererBase_Setup_d_2
} // namespace app::classes::types
