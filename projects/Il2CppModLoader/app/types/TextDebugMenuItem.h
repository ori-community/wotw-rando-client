#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextDebugMenuItem__Class** type_info;
        inline app::TextDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::TextDebugMenuItem__Class>(type_info, "", "TextDebugMenuItem");
        }
        inline app::TextDebugMenuItem* create() {
            return il2cpp::create_object<app::TextDebugMenuItem>(get_class());
        }
    } // namespace TextDebugMenuItem
} // namespace app::classes::types
