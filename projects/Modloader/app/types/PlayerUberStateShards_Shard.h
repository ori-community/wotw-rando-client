#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard__Class.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard__Array.h>

namespace app::classes::types {
    namespace PlayerUberStateShards_Shard {
        inline app::PlayerUberStateShards_Shard__Class** type_info = (app::PlayerUberStateShards_Shard__Class**)(modloader::win::memory::resolve_rva(0x0477E3C8));
        inline app::PlayerUberStateShards_Shard__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateShards_Shard__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateShards", "Shard");
        }
        inline app::PlayerUberStateShards_Shard* create() {
            return il2cpp::create_object<app::PlayerUberStateShards_Shard>(get_class());
        }
        inline app::PlayerUberStateShards_Shard__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateShards_Shard__Array>(get_class(), size);
        }
        inline app::PlayerUberStateShards_Shard__Array* create_array(const std::vector<app::PlayerUberStateShards_Shard*>& items) {
            return il2cpp::array_new<app::PlayerUberStateShards_Shard__Array>(get_class(), items);
        }
    } // namespace PlayerUberStateShards_Shard
} // namespace app::classes::types
