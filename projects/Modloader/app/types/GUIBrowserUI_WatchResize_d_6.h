#pragma once
#include <Modloader/app/structs/GUIBrowserUI_WatchResize_d_6.h>
#include <Modloader/app/structs/GUIBrowserUI_WatchResize_d_6__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIBrowserUI_WatchResize_d_6 {
        inline app::GUIBrowserUI_WatchResize_d_6__Class** type_info() {
            static app::GUIBrowserUI_WatchResize_d_6__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUIBrowserUI_WatchResize_d_6__Class**)(modloader::win::memory::resolve_rva(0x04762580));
            }
            return cache;
        }
        inline app::GUIBrowserUI_WatchResize_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::GUIBrowserUI_WatchResize_d_6__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "GUIBrowserUI", "<WatchResize>d__6");
        }
        inline app::GUIBrowserUI_WatchResize_d_6* create() {
            return il2cpp::create_object<app::GUIBrowserUI_WatchResize_d_6>(get_class());
        }
    } // namespace GUIBrowserUI_WatchResize_d_6
} // namespace app::classes::types
