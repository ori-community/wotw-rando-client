#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardTraderNPC {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShardTraderNPC__Class** type_info;
        inline app::ShardTraderNPC__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderNPC__Class>(type_info, "", "ShardTraderNPC");
        }
        inline app::ShardTraderNPC* create() {
            return il2cpp::create_object<app::ShardTraderNPC>(get_class());
        }
    } // namespace ShardTraderNPC
} // namespace app::classes::types
