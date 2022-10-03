#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugGUIText_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugGUIText_c__Class** type_info;
        inline app::DebugGUIText_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugGUIText_c__Class>(type_info, "", "DebugGUIText", "<>c");
        }
        inline app::DebugGUIText_c* create() {
            return il2cpp::create_object<app::DebugGUIText_c>(get_class());
        }
    } // namespace DebugGUIText_c
} // namespace app::classes::types
