#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeafsDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeafsDebugMenuItem__Class** type_info;
        inline app::LeafsDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::LeafsDebugMenuItem__Class>(type_info, "", "LeafsDebugMenuItem");
        }
        inline app::LeafsDebugMenuItem* create() {
            return il2cpp::create_object<app::LeafsDebugMenuItem>(get_class());
        }
    } // namespace LeafsDebugMenuItem
} // namespace app::classes::types
