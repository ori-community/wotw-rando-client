#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShardTraderInShopBehaviour__Class.h>
#include <Modloader/app/structs/ShardTraderInShopBehaviour.h>

namespace app::classes::types {
    namespace ShardTraderInShopBehaviour {
        namespace {
            inline app::ShardTraderInShopBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ShardTraderInShopBehaviour__Class** type_info = &type_info_ref;
        inline app::ShardTraderInShopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderInShopBehaviour__Class>(type_info, "Moon", "ShardTraderInShopBehaviour");
        }
        inline app::ShardTraderInShopBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderInShopBehaviour>(get_class());
        }
    } // namespace ShardTraderInShopBehaviour
} // namespace app::classes::types
