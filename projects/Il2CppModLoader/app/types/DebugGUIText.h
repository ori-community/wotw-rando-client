#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugGUIText {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugGUIText__Class** type_info;
        inline app::DebugGUIText__Class* get_class() {
            return il2cpp::get_class<app::DebugGUIText__Class>(type_info, "", "DebugGUIText");
        }
        inline app::DebugGUIText* create() {
            return il2cpp::create_object<app::DebugGUIText>(get_class());
        }
    } // namespace DebugGUIText
} // namespace app::classes::types
