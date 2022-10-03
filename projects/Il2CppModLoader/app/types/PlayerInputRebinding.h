#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInputRebinding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerInputRebinding__Class** type_info;
        inline app::PlayerInputRebinding__Class* get_class() {
            return il2cpp::get_class<app::PlayerInputRebinding__Class>(type_info, "", "PlayerInputRebinding");
        }
        inline app::PlayerInputRebinding* create() {
            return il2cpp::create_object<app::PlayerInputRebinding>(get_class());
        }
    } // namespace PlayerInputRebinding
} // namespace app::classes::types
