#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CursorRendererWorldSpace {
        namespace {
            app::CursorRendererWorldSpace__Class* type_info_ref = nullptr;
        }
        app::CursorRendererWorldSpace__Class** type_info = &type_info_ref;
        inline app::CursorRendererWorldSpace__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererWorldSpace__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CursorRendererWorldSpace");
        }
        inline app::CursorRendererWorldSpace* create() {
            return il2cpp::create_object<app::CursorRendererWorldSpace>(get_class());
        }
    } // namespace CursorRendererWorldSpace
} // namespace app::classes::types
