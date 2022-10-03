#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoolDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BoolDebugMenuItem__Class** type_info;
        inline app::BoolDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BoolDebugMenuItem__Class>(type_info, "", "BoolDebugMenuItem");
        }
        inline app::BoolDebugMenuItem* create() {
            return il2cpp::create_object<app::BoolDebugMenuItem>(get_class());
        }
    } // namespace BoolDebugMenuItem
} // namespace app::classes::types
