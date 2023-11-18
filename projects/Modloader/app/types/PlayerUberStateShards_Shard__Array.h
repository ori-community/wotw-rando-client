#pragma once
#include <Modloader/app/structs/PlayerUberStateShards_Shard__Array.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateShards_Shard__Array {
        inline app::PlayerUberStateShards_Shard__Array__Class** type_info() {
            static app::PlayerUberStateShards_Shard__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerUberStateShards_Shard__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerUberStateShards_Shard__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateShards_Shard__Array__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateShards+Shard[]");
        }
        inline app::PlayerUberStateShards_Shard__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateShards_Shard__Array>(get_class());
        }
    } // namespace PlayerUberStateShards_Shard__Array
} // namespace app::classes::types
