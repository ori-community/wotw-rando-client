#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NavigableOnGUI_1__Class** type_info;
        inline app::NavigableOnGUI_1__Class* get_class() {
            return il2cpp::get_class<app::NavigableOnGUI_1__Class>(type_info, "", "NavigableOnGUI");
        }
        inline app::NavigableOnGUI_1* create() {
            return il2cpp::create_object<app::NavigableOnGUI_1>(get_class());
        }
    } // namespace NavigableOnGUI_1
} // namespace app::classes::types
