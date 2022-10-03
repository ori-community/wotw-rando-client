#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerSpiritShards {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerSpiritShards__Class** type_info;
        inline app::PlayerSpiritShards__Class* get_class() {
            return il2cpp::get_class<app::PlayerSpiritShards__Class>(type_info, "", "PlayerSpiritShards");
        }
        inline app::PlayerSpiritShards* create() {
            return il2cpp::create_object<app::PlayerSpiritShards>(get_class());
        }
    } // namespace PlayerSpiritShards
} // namespace app::classes::types
