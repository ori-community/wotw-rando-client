#pragma once
#include <Modloader/app/structs/ShardTraderDidNotBuyBehaviour.h>
#include <Modloader/app/structs/ShardTraderDidNotBuyBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderDidNotBuyBehaviour {
        inline app::ShardTraderDidNotBuyBehaviour__Class** type_info() {
            static app::ShardTraderDidNotBuyBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderDidNotBuyBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderDidNotBuyBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderDidNotBuyBehaviour__Class>(type_info(), "Moon", "ShardTraderDidNotBuyBehaviour");
        }
        inline app::ShardTraderDidNotBuyBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderDidNotBuyBehaviour>(get_class());
        }
    } // namespace ShardTraderDidNotBuyBehaviour
} // namespace app::classes::types
