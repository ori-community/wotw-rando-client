#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShardTraderAfterShopBehaviour__Class.h>
#include <Modloader/app/structs/ShardTraderAfterShopBehaviour.h>

namespace app::classes::types {
    namespace ShardTraderAfterShopBehaviour {
        namespace {
            inline app::ShardTraderAfterShopBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ShardTraderAfterShopBehaviour__Class** type_info = &type_info_ref;
        inline app::ShardTraderAfterShopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderAfterShopBehaviour__Class>(type_info, "Moon", "ShardTraderAfterShopBehaviour");
        }
        inline app::ShardTraderAfterShopBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderAfterShopBehaviour>(get_class());
        }
    } // namespace ShardTraderAfterShopBehaviour
} // namespace app::classes::types
