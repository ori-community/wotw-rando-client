#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateInventory__Class** type_info;
        inline app::PlayerUberStateInventory__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateInventory__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateInventory");
        }
        inline app::PlayerUberStateInventory* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory>(get_class());
        }
    } // namespace PlayerUberStateInventory
} // namespace app::classes::types
