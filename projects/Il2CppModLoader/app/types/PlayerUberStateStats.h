#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateStats {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateStats__Class** type_info;
        inline app::PlayerUberStateStats__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateStats__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateStats");
        }
        inline app::PlayerUberStateStats* create() {
            return il2cpp::create_object<app::PlayerUberStateStats>(get_class());
        }
    } // namespace PlayerUberStateStats
} // namespace app::classes::types
