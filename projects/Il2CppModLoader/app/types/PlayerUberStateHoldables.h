#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateHoldables {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateHoldables__Class** type_info;
        inline app::PlayerUberStateHoldables__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateHoldables__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateHoldables");
        }
        inline app::PlayerUberStateHoldables* create() {
            return il2cpp::create_object<app::PlayerUberStateHoldables>(get_class());
        }
    } // namespace PlayerUberStateHoldables
} // namespace app::classes::types
