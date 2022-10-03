#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NavigableOnGUI__Class** type_info;
        inline app::NavigableOnGUI__Class* get_class() {
            return il2cpp::get_class<app::NavigableOnGUI__Class>(type_info, "Moon.UberStateVisualization", "NavigableOnGUI");
        }
        inline app::NavigableOnGUI* create() {
            return il2cpp::create_object<app::NavigableOnGUI>(get_class());
        }
    } // namespace NavigableOnGUI
} // namespace app::classes::types
