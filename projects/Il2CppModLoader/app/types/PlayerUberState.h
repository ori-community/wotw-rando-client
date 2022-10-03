#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberState__Class** type_info;
        inline app::PlayerUberState__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberState__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberState");
        }
        inline app::PlayerUberState* create() {
            return il2cpp::create_object<app::PlayerUberState>(get_class());
        }
    } // namespace PlayerUberState
} // namespace app::classes::types
