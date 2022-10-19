#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateShards_Shard__Array {
        namespace {
            inline app::PlayerUberStateShards_Shard__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerUberStateShards_Shard__Array__Class** type_info = &type_info_ref;
        inline app::PlayerUberStateShards_Shard__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateShards_Shard__Array__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateShards+Shard[]");
        }
        inline app::PlayerUberStateShards_Shard__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateShards_Shard__Array>(get_class());
        }
    } // namespace PlayerUberStateShards_Shard__Array
} // namespace app::classes::types
