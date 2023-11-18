#pragma once
#include <Modloader/app/structs/ShardTraderPlaceholder.h>
#include <Modloader/app/structs/ShardTraderPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderPlaceholder {
        inline app::ShardTraderPlaceholder__Class** type_info() {
            static app::ShardTraderPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderPlaceholder__Class>(type_info(), "", "ShardTraderPlaceholder");
        }
        inline app::ShardTraderPlaceholder* create() {
            return il2cpp::create_object<app::ShardTraderPlaceholder>(get_class());
        }
    } // namespace ShardTraderPlaceholder
} // namespace app::classes::types
