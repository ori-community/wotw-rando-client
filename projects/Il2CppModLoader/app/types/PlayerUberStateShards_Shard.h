#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateShards_Shard {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateShards_Shard__Class** type_info;
        inline app::PlayerUberStateShards_Shard__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateShards_Shard__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateShards", "Shard");
        }
        inline app::PlayerUberStateShards_Shard* create() {
            return il2cpp::create_object<app::PlayerUberStateShards_Shard>(get_class());
        }
        inline app::PlayerUberStateShards_Shard__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateShards_Shard__Array>(get_class(), size);
        }
    } // namespace PlayerUberStateShards_Shard
} // namespace app::classes::types
