#pragma once
#include <Modloader/app/structs/ShardTraderInShopBehaviour.h>
#include <Modloader/app/structs/ShardTraderInShopBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderInShopBehaviour {
        inline app::ShardTraderInShopBehaviour__Class** type_info() {
            static app::ShardTraderInShopBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderInShopBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderInShopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderInShopBehaviour__Class>(type_info(), "Moon", "ShardTraderInShopBehaviour");
        }
        inline app::ShardTraderInShopBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderInShopBehaviour>(get_class());
        }
    } // namespace ShardTraderInShopBehaviour
} // namespace app::classes::types
