#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerSpiritShards_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerSpiritShards_c__Class** type_info;
        inline app::PlayerSpiritShards_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerSpiritShards_c__Class>(type_info, "", "PlayerSpiritShards", "<>c");
        }
        inline app::PlayerSpiritShards_c* create() {
            return il2cpp::create_object<app::PlayerSpiritShards_c>(get_class());
        }
    } // namespace PlayerSpiritShards_c
} // namespace app::classes::types
