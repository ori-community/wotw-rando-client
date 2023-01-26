#pragma once
#include <Modloader/app/structs/CursorRendererOS.h>
#include <Modloader/app/structs/CursorRendererOS__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CursorRendererOS {
        inline app::CursorRendererOS__Class** type_info() {
            static app::CursorRendererOS__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CursorRendererOS__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CursorRendererOS__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererOS__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "CursorRendererOS");
        }
        inline app::CursorRendererOS* create() {
            return il2cpp::create_object<app::CursorRendererOS>(get_class());
        }
    } // namespace CursorRendererOS
} // namespace app::classes::types
