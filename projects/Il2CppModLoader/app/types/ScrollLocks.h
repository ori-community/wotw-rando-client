#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScrollLocks {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScrollLocks__Class** type_info;
        inline app::ScrollLocks__Class* get_class() {
            return il2cpp::get_class<app::ScrollLocks__Class>(type_info, "Game", "ScrollLocks");
        }
        inline app::ScrollLocks* create() {
            return il2cpp::create_object<app::ScrollLocks>(get_class());
        }
    } // namespace ScrollLocks
} // namespace app::classes::types
