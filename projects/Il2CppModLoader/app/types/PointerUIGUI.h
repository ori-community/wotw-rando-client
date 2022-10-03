#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerUIGUI {
        namespace {
            app::PointerUIGUI__Class* type_info_ref = nullptr;
        }
        app::PointerUIGUI__Class** type_info = &type_info_ref;
        inline app::PointerUIGUI__Class* get_class() {
            return il2cpp::get_class<app::PointerUIGUI__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PointerUIGUI");
        }
        inline app::PointerUIGUI* create() {
            return il2cpp::create_object<app::PointerUIGUI>(get_class());
        }
    } // namespace PointerUIGUI
} // namespace app::classes::types
