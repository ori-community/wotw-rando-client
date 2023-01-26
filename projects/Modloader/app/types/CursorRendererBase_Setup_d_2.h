#pragma once
#include <Modloader/app/structs/CursorRendererBase_Setup_d_2.h>
#include <Modloader/app/structs/CursorRendererBase_Setup_d_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CursorRendererBase_Setup_d_2 {
        inline app::CursorRendererBase_Setup_d_2__Class** type_info() {
            static app::CursorRendererBase_Setup_d_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CursorRendererBase_Setup_d_2__Class**)(modloader::win::memory::resolve_rva(0x047966C8));
            }
            return cache;
        }
        inline app::CursorRendererBase_Setup_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::CursorRendererBase_Setup_d_2__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "CursorRendererBase", "<Setup>d__2");
        }
        inline app::CursorRendererBase_Setup_d_2* create() {
            return il2cpp::create_object<app::CursorRendererBase_Setup_d_2>(get_class());
        }
    } // namespace CursorRendererBase_Setup_d_2
} // namespace app::classes::types
