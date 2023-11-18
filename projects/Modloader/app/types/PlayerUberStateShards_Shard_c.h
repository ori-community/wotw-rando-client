#pragma once
#include <Modloader/app/structs/PlayerUberStateShards_Shard_c.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateShards_Shard_c {
        inline app::PlayerUberStateShards_Shard_c__Class** type_info() {
            static app::PlayerUberStateShards_Shard_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateShards_Shard_c__Class**)(modloader::win::memory::resolve_rva(0x04785708));
            }
            return cache;
        }
        inline app::PlayerUberStateShards_Shard_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateShards_Shard_c__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateShards+Shard", "<>c");
        }
        inline app::PlayerUberStateShards_Shard_c* create() {
            return il2cpp::create_object<app::PlayerUberStateShards_Shard_c>(get_class());
        }
    } // namespace PlayerUberStateShards_Shard_c
} // namespace app::classes::types
