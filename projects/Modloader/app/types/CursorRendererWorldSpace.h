#pragma once
#include <Modloader/app/structs/CursorRendererWorldSpace.h>
#include <Modloader/app/structs/CursorRendererWorldSpace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CursorRendererWorldSpace {
        inline app::CursorRendererWorldSpace__Class** type_info() {
            static app::CursorRendererWorldSpace__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CursorRendererWorldSpace__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CursorRendererWorldSpace__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererWorldSpace__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "CursorRendererWorldSpace");
        }
        inline app::CursorRendererWorldSpace* create() {
            return il2cpp::create_object<app::CursorRendererWorldSpace>(get_class());
        }
    } // namespace CursorRendererWorldSpace
} // namespace app::classes::types
