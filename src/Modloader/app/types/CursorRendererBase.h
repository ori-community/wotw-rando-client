#pragma once
#include <Modloader/app/structs/CursorRendererBase.h>
#include <Modloader/app/structs/CursorRendererBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CursorRendererBase {
        inline app::CursorRendererBase__Class** type_info() {
            static app::CursorRendererBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CursorRendererBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CursorRendererBase__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererBase__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "CursorRendererBase");
        }
        inline app::CursorRendererBase* create() {
            return il2cpp::create_object<app::CursorRendererBase>(get_class());
        }
    } // namespace CursorRendererBase
} // namespace app::classes::types
