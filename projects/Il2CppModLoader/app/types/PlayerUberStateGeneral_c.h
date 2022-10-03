#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateGeneral_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateGeneral_c__Class** type_info;
        inline app::PlayerUberStateGeneral_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateGeneral_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateGeneral", "<>c");
        }
        inline app::PlayerUberStateGeneral_c* create() {
            return il2cpp::create_object<app::PlayerUberStateGeneral_c>(get_class());
        }
    } // namespace PlayerUberStateGeneral_c
} // namespace app::classes::types
