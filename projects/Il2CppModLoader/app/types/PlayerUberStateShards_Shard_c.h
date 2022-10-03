#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateShards_Shard_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateShards_Shard_c__Class** type_info;
        inline app::PlayerUberStateShards_Shard_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateShards_Shard_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateShards+Shard", "<>c");
        }
        inline app::PlayerUberStateShards_Shard_c* create() {
            return il2cpp::create_object<app::PlayerUberStateShards_Shard_c>(get_class());
        }
    } // namespace PlayerUberStateShards_Shard_c
} // namespace app::classes::types
