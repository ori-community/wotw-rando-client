#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SearchDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SearchDebugMenuItem__Class** type_info;
        inline app::SearchDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SearchDebugMenuItem__Class>(type_info, "", "SearchDebugMenuItem");
        }
        inline app::SearchDebugMenuItem* create() {
            return il2cpp::create_object<app::SearchDebugMenuItem>(get_class());
        }
    } // namespace SearchDebugMenuItem
} // namespace app::classes::types
