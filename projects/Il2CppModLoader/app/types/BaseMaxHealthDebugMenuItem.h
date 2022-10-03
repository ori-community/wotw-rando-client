#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseMaxHealthDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseMaxHealthDebugMenuItem__Class** type_info;
        inline app::BaseMaxHealthDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BaseMaxHealthDebugMenuItem__Class>(type_info, "", "BaseMaxHealthDebugMenuItem");
        }
        inline app::BaseMaxHealthDebugMenuItem* create() {
            return il2cpp::create_object<app::BaseMaxHealthDebugMenuItem>(get_class());
        }
    } // namespace BaseMaxHealthDebugMenuItem
} // namespace app::classes::types
