#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInventory_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerInventory_c__Class** type_info;
        inline app::PlayerInventory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInventory_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PlayerInventory", "<>c");
        }
        inline app::PlayerInventory_c* create() {
            return il2cpp::create_object<app::PlayerInventory_c>(get_class());
        }
    } // namespace PlayerInventory_c
} // namespace app::classes::types
