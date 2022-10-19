#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CursorRendererBase {
        namespace {
            inline app::CursorRendererBase__Class* type_info_ref = nullptr;
        }
        inline app::CursorRendererBase__Class** type_info = &type_info_ref;
        inline app::CursorRendererBase__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererBase__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CursorRendererBase");
        }
        inline app::CursorRendererBase* create() {
            return il2cpp::create_object<app::CursorRendererBase>(get_class());
        }
    } // namespace CursorRendererBase
} // namespace app::classes::types
