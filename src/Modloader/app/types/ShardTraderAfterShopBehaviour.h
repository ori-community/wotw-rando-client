#pragma once
#include <Modloader/app/structs/ShardTraderAfterShopBehaviour.h>
#include <Modloader/app/structs/ShardTraderAfterShopBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderAfterShopBehaviour {
        inline app::ShardTraderAfterShopBehaviour__Class** type_info() {
            static app::ShardTraderAfterShopBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderAfterShopBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderAfterShopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderAfterShopBehaviour__Class>(type_info(), "Moon", "ShardTraderAfterShopBehaviour");
        }
        inline app::ShardTraderAfterShopBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderAfterShopBehaviour>(get_class());
        }
    } // namespace ShardTraderAfterShopBehaviour
} // namespace app::classes::types
