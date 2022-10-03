#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardTraderAfterShopBehaviour {
        namespace {
            app::ShardTraderAfterShopBehaviour__Class* type_info_ref = nullptr;
        }
        app::ShardTraderAfterShopBehaviour__Class** type_info = &type_info_ref;
        inline app::ShardTraderAfterShopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderAfterShopBehaviour__Class>(type_info, "Moon", "ShardTraderAfterShopBehaviour");
        }
        inline app::ShardTraderAfterShopBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderAfterShopBehaviour>(get_class());
        }
    } // namespace ShardTraderAfterShopBehaviour
} // namespace app::classes::types
