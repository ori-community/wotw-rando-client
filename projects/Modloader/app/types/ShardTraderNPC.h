#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShardTraderNPC {
        inline app::ShardTraderNPC__Class** type_info = (app::ShardTraderNPC__Class**)(modloader::win::memory::resolve_rva(0x0476B9B0));
        inline app::ShardTraderNPC__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderNPC__Class>(type_info, "", "ShardTraderNPC");
        }
        inline app::ShardTraderNPC* create() {
            return il2cpp::create_object<app::ShardTraderNPC>(get_class());
        }
    } // namespace ShardTraderNPC
} // namespace app::classes::types
