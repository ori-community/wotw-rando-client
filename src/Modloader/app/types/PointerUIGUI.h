#pragma once
#include <Modloader/app/structs/PointerUIGUI.h>
#include <Modloader/app/structs/PointerUIGUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerUIGUI {
        inline app::PointerUIGUI__Class** type_info() {
            static app::PointerUIGUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointerUIGUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointerUIGUI__Class* get_class() {
            return il2cpp::get_class<app::PointerUIGUI__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PointerUIGUI");
        }
        inline app::PointerUIGUI* create() {
            return il2cpp::create_object<app::PointerUIGUI>(get_class());
        }
    } // namespace PointerUIGUI
} // namespace app::classes::types
