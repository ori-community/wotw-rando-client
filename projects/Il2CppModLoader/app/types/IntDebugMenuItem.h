#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntDebugMenuItem__Class** type_info;
        inline app::IntDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::IntDebugMenuItem__Class>(type_info, "", "IntDebugMenuItem");
        }
        inline app::IntDebugMenuItem* create() {
            return il2cpp::create_object<app::IntDebugMenuItem>(get_class());
        }
    } // namespace IntDebugMenuItem
} // namespace app::classes::types
