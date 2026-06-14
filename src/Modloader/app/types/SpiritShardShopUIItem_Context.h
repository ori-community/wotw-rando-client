#pragma once
#include <Modloader/app/structs/SpiritShardShopUIItem_Context.h>
#include <Modloader/app/structs/SpiritShardShopUIItem_Context__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUIItem_Context {
        inline app::SpiritShardShopUIItem_Context__Class** type_info() {
            static app::SpiritShardShopUIItem_Context__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardShopUIItem_Context__Class**)(modloader::win::memory::resolve_rva(0x0477C268));
            }
            return cache;
        }
        inline app::SpiritShardShopUIItem_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardShopUIItem_Context__Class>(type_info(), "", "SpiritShardShopUIItem", "Context");
        }
        inline app::SpiritShardShopUIItem_Context* create() {
            return il2cpp::create_object<app::SpiritShardShopUIItem_Context>(get_class());
        }
    } // namespace SpiritShardShopUIItem_Context
} // namespace app::classes::types
