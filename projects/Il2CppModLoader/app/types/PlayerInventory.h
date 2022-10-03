#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInventory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerInventory__Class** type_info;
        inline app::PlayerInventory__Class* get_class() {
            return il2cpp::get_class<app::PlayerInventory__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PlayerInventory");
        }
        inline app::PlayerInventory* create() {
            return il2cpp::create_object<app::PlayerInventory>(get_class());
        }
    } // namespace PlayerInventory
} // namespace app::classes::types
