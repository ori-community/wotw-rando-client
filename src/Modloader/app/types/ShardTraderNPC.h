#pragma once
#include <Modloader/app/structs/ShardTraderNPC.h>
#include <Modloader/app/structs/ShardTraderNPC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderNPC {
        inline app::ShardTraderNPC__Class** type_info() {
            static app::ShardTraderNPC__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShardTraderNPC__Class**)(modloader::win::memory::resolve_rva(0x0476B9B0));
            }
            return cache;
        }
        inline app::ShardTraderNPC__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderNPC__Class>(type_info(), "", "ShardTraderNPC");
        }
        inline app::ShardTraderNPC* create() {
            return il2cpp::create_object<app::ShardTraderNPC>(get_class());
        }
    } // namespace ShardTraderNPC
} // namespace app::classes::types
