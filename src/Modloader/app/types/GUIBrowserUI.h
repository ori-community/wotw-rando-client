#pragma once
#include <Modloader/app/structs/GUIBrowserUI.h>
#include <Modloader/app/structs/GUIBrowserUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIBrowserUI {
        inline app::GUIBrowserUI__Class** type_info() {
            static app::GUIBrowserUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIBrowserUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::GUIBrowserUI__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "GUIBrowserUI");
        }
        inline app::GUIBrowserUI* create() {
            return il2cpp::create_object<app::GUIBrowserUI>(get_class());
        }
    } // namespace GUIBrowserUI
} // namespace app::classes::types
