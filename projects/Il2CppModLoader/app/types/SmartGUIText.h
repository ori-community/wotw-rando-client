#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmartGUIText {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SmartGUIText__Class** type_info;
        inline app::SmartGUIText__Class* get_class() {
            return il2cpp::get_class<app::SmartGUIText__Class>(type_info, "", "SmartGUIText");
        }
        inline app::SmartGUIText* create() {
            return il2cpp::create_object<app::SmartGUIText>(get_class());
        }
    } // namespace SmartGUIText
} // namespace app::classes::types
