#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateGeneral {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateGeneral__Class** type_info;
        inline app::PlayerUberStateGeneral__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateGeneral__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateGeneral");
        }
        inline app::PlayerUberStateGeneral* create() {
            return il2cpp::create_object<app::PlayerUberStateGeneral>(get_class());
        }
    } // namespace PlayerUberStateGeneral
} // namespace app::classes::types
